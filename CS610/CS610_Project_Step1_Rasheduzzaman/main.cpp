// main.cpp
// CS610 Sparse Matrices Project
// Created by MD RASHEDUZZAMAN, NJIT ID#31349162
// email: mr468@njit.edu, rashed091nsu@gmail.com

#include <iostream>
#include "sparse.h"
using namespace std;

void TakeUserInput(sparse& U){
	int row, col, value;
	cout << "Please enter the value of the sparse matrix U.\nInput format is: row column value.\n";
    	cout << "Press any character from [a-z] to exit input process!\n";
    	
	while(cin>>row>>col>>value){
		U.InitializeByInput(row, col, value);
	}
	cout << endl;
}

int main(){
	// create 4 sparse object required for step 1 of the CS610 Programming Project
	sparse A;
	A.InitializeByInput();
	A.Print();
	
	sparse B;
	B.InitializeByFormula('B');
	B.Print();
	
	sparse C;
	C.InitializeByFormula('C');
	C.Print();
	
	sparse D;
	D.InitializeByFormula('D');
	D.Print();
	
	sparse U;
	TakeUserInput(U);
	U.Print();
	
	return 0;
}

