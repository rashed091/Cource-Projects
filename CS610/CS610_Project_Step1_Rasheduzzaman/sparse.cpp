// sparse.cpp
// CS610 Sparse Matrices Project
// Created by MD RASHEDUZZAMAN, NJIT ID#31349162
// email: mr468@njit.edu, rashed091nsu@gmail.com

#include "sparse.h"
using namespace std;

int sz = 0;					// global variable for martix size, which was saved during the creation of the matrix A.

/*
-----------------------------------------------------
* Function: sparse() 
* Input: none 
* Output: when sparse object is created all object fields are set to null
-----------------------------------------------------
*/
sparse::sparse(){
	if(!sz)		// check the size of the matrix and if zero take input from user
		getSize();
	Row = new Node[sz];
	Col = new Node[sz];
	Initialize();
}

/*
-----------------------------------------------------
* Function: ~sparse() 
* Input: none 
* Output: delete all the dynamically allocated array of Node and set them to null.
-----------------------------------------------------
*/
sparse::~sparse(){
	delete [] Row;
	delete [] Col;
	Row = NULL;
	Col = NULL;
}

/*
-----------------------------------------------------
* Function: getSize() 
* Input: none 
* Output: Takes input for matrix size .
-----------------------------------------------------
*/

void sparse::getSize(){
	while(1){
		cout << "Enter The Matrix Size: ";
		cin >> sz;
		if(sz <= 0){
			cout << "Size of the matrix should be non-zero and non-negative!\n";
			cout <<	"Please try again!\n";
		}
		else
			break; 
	}
	cout<<endl;
}


/*
-----------------------------------------------------
* Function: Initialize() 
* Input: none 
* Output: Initialize all the dynamically allocated array of Nodes.
-----------------------------------------------------
*/
void sparse::Initialize(){
    for (int i=0; i<sz; i++) {		// initilize the row, column value of each row and column for the conveniance
        Row[i] = Node(i,0);
        Col[i] = Node(0,i);
    } 
    for(int i=0; i< sz; i++){		// at the beginning all row and column pointer points to it self.  
    	Row[i].column_link = &Row[i];
    	Col[i].row_link = &Col[i];
    }
}

/*
-----------------------------------------------------
* Function: Print() 
* Input: none 
* Output: Print the matirx of the sparse object instance, which is calling this function
-----------------------------------------------------
*/
void sparse::Print(){
	Node * rl;
	for(int i=0; i<sz; i++){
		rl = &Row[i];
		if(rl->column_link == rl){
			int j = sz;
			while(j){
				cout << 0 << "\t";
				j--;
			}
			cout << endl;
		}
		else{
			int j = 1;
			int count = 0;
			while(rl->column_link != &Row[i]){
				rl = rl->column_link;
				if(j < rl->column){
					while(j != rl->column){
						cout << 0 << "\t";
						j++;
						count++;
					}
				}
				cout << rl->value << "\t";
				j++;
				count++;
			}
			while(count != sz){
				cout << 0 << "\t";
				count++;
			}
			cout << endl;
		}
	}
	cout << endl;
}

/*
-----------------------------------------------------
* Function: InitializeByInput() 
* Input: n: size of the matrix given by user 
* Output: A matrix initialize by user input
-----------------------------------------------------
*/
void sparse::InitializeByInput(){
	int in; 
	int V[4][4] = {{8, 0, 6, 0},
		      {0, 7, 5, 0},
		      {3, 0, 0, 0},
		      {0, 0, 0, 9}};
	for(int i=0; i<sz; i++){
		for(int j=0; j<sz; j++){
			if( i > 3)
				in = 0;
			else if(j > 3)
				in = 0;
			else
				in = V[i][j];
			InitializeByInput(i+1, j+1, in);		
		}
	}
}

/*
-----------------------------------------------------
* Function: InitializeByInput(int rv, int cv, int value) 
* Input: rv, cv, value: row index, column index, and value 
* Output: A matrix initialize by user input
-----------------------------------------------------
*/

void sparse::InitializeByInput(int rv, int cv, int value){ 
    if((rv <1 || rv > sz) || (cv < 1 || cv > sz)){		// check if row and column value is within the bound
    	cout << "Your row/column index is out of bound! \nIt should be within the range[1..." << sz << "] \nTry again!"<<endl;
    	return;
    }  
    Node * rl, * cl; // temporary node for row and column
    Node * curr, * tmp; // point to current node in each row and column we are processing
    bool flag;		// which operations are needed to be done
    	
    rl = &Row[rv-1];	// row pointer
    cl = &Col[cv-1];	// column pointer
    curr = rl;
    tmp = cl;
    flag = false;
    if(value == 0){	// value is zero
    	Node * nn = NULL;
    	while(curr->column_link != rl){	// check if an existing node value is changed to zero. If so, then update the row_link and column_link  
    		nn = curr;
    		curr = curr->column_link;
    		if(curr->row == rv && curr->column == cv){
    			while(tmp->row_link->row != rv)
    				tmp = tmp->row_link;
    			tmp->row_link = curr->row_link;  
    			nn->column_link = curr->column_link;
    			break;
    		}
    	}
    	return;
    }
    else{	// value is non-zero 
    	while(curr->column_link != rl){	// check if an existing node value is changed to one non-zero value to other. If so, then just update the value. 
    		curr = curr->column_link; 
    		if(curr->row == rv && curr->column == cv){
    			curr->value = value;
    			flag = true;
    			break;
    		}
    	}
    	if(flag)
    		return;
    }
    flag = true;
    if(rl->column_link == rl){	// rl->column_link points to rl means there is no node in that row. So create a new node.
    	Node * newNode = new Node(rv, cv, value);
    	newNode->column_link = rl->column_link;
    	rl->column_link = newNode;
    	while(tmp->row_link != cl){	// find the previous row node of the new node 
    		if( tmp->row < rv && rv < tmp->row_link->row){ 	// new node is being inserted between two existing row node
    			newNode->row_link = tmp->row_link;
    			tmp->row_link = newNode;
    			flag = false;
    			break;
    		}
    		tmp = tmp->row_link;
    	}
    	if(flag){	// new node is the last node the current column
    		newNode->row_link = tmp->row_link;
    		tmp->row_link = newNode;
    	}
    	return;
    }
    curr = rl;	// reset curr to rl which might have benn changed in the last setps
    tmp = cl;	// reset tmp to cl which might have benn changed in the last setps
    flag = false;
    while(curr->column_link != rl){	// new node is somewhere in the middle of the current row between two column 
    	if(curr->column < cv && cv < curr->column_link->column){ // new node is being inserted between two existing column node of the current row
    		Node * newNode = new Node(rv, cv, value);
    		newNode->column_link = curr->column_link;
    		curr->column_link = newNode;
    		flag = true;
    		while(tmp->row_link != cl){
    			if( tmp->row < rv && rv < tmp->row_link->row){ // new node is being inserted between two existing row node of the current column
    				newNode->row_link = tmp->row_link;
    				tmp->row_link = newNode;
    				flag = false;
    				break;
    			}
    			tmp = tmp->row_link;
    		}
    		if(flag){	// new node is the last node the this column
    			newNode->row_link = tmp->row_link;
    			tmp->row_link = newNode;
    		}
    		flag =  false;
    		break;
    	}
    	if(cv > curr->column && cv > curr->column_link->column){ // new node is the last node of the current row
    		curr = curr->column_link;
    		flag = true;
    	}
    }
    if(flag){	// new node is the last node of the current row
    	Node * newNode = new Node(rv, cv, value);
    	newNode->column_link = curr->column_link;
    	curr->column_link = newNode;
    	flag = true;
    	while(tmp->row_link != cl){
    		if( tmp->row < rv && rv < tmp->row_link->row){	// new node is being inserted between two existing column node
    			newNode->row_link = tmp->row_link;
    			tmp->row_link = newNode;
    			flag = false;
    			break;
    		}
    		tmp = tmp->row_link;
    	}
    	if(flag){	// new node is the last node the this column
    		newNode->row_link = tmp->row_link;
    		tmp->row_link = newNode;
    	}
    }	
}

/*
-----------------------------------------------------
* Function: formulas() 
* Input: i, j, f: row index, column index, and formula  
* Output: return a single integer value based on the formula f
-----------------------------------------------------
*/
int sparse::formulas(int i, int j, char f){
	if( f == 'B'){					// definition of formula B
		if(i == j)
			return i;
		else
			return 0;
	}
	else if(f == 'C'){				// definition of formula C
		if( i == (j+1)%sz)
			return (-2*j-1);
		else
			return 0;
	}
	else if(f == 'D'){				// definition of formula D
		if( ( i % 2 == 0) && ( j % 2 == 0))
			return (i+j);
		else if( j == 3)
			return (-i);
		else
			return 0;
	}
	else
		return 0;
}


/*
-----------------------------------------------------
* Function: InitializeByFormula() 
* Input: ch: name of the formula 
* Output: A matrix initialize by formula ch
-----------------------------------------------------
*/
void sparse::InitializeByFormula(char ch){	    // ch tells us which formula (B, C, D) to use when automatic input are generated for the matrices  
    Node * rl, * cl;					// temporary node for holding row and column value
    int in;						// takes input value from formulas
    for(int i = 1; i <= sz; i++){
    	rl = &Row[i-1];					// point to the current row which being now processed
    	while(rl->column_link != &Row[i-1])			// find the last node of the current row
    		rl = rl->column_link;
        for(int j = 1; j <= sz; j++){
            in = formulas(i, j, ch);
            if(in == 0)
            	continue;
            cl = &Col[j-1];				// point to the current column which being now processed
            while(cl->row_link != &Col[j-1]) 			// find the last node of the current column which was inserted previously
            	cl = cl->row_link;
            Node * newNode = new Node(i, j, in); 	// create a new node for non-zero input value
            newNode->column_link = rl->column_link; 	// set up the appropriate column_link for newNode
            newNode->row_link = cl->row_link; 		// set up the appropriate row_link for newNode
            rl->column_link = newNode; 			// update the current row column_link
            cl->row_link = newNode; 			// update the current column row_link
            rl = newNode; 				// move the current row pointer to newnode; 
        }
    }
}
