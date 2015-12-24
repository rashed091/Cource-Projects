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
	// Test case for step 1 of the CS610 Programming Project
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
	
	// Test case for step 2 of the CS610 Programming Project
	sparse E;
	E.Add(B, D);
	E.Print();

	sparse F;
	F.Subtract(D, C);
	F.Print();
	
	sparse G;
	G.Add(A, B);
	G.Print();
	
	sparse H;
	H.Subtract(A, B);
	H.Print();

	sparse I;
	I.Subtract(E, F);
	I.Print();

	sparse J;
	J.Add(G, H);
	J.Print();	
	
	sparse K;
	K.scalarMultiply(5, B);
	K.Print();

	sparse L;
	L.scalarMultiply(8, C);
	L.Print();

	sparse M;
	M.scalarMultiply(3, G);
	M.Print();

	sparse N;
	N.scalarMultiply(2, H);
	N.Print();

	sparse O;
	O.scalarMultiply(2, M);
	O.Print();

	sparse P;
	P.scalarMultiply(3, F);
	P.Print();

	sparse U;
	TakeUserInput(U);
	U.Print();

	return 0;
}

