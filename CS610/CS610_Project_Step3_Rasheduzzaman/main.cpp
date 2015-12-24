// main.cpp
// CS610 Sparse Matrices Project
// Created by MD RASHEDUZZAMAN, NJIT ID#31349162
// email: mr468@njit.edu, rashed091nsu@gmail.com

#include <iostream>
#include "sparse.h"
using namespace std;

void TakeUserInput(sparse& UI){
	int row, col, value;
	cout << "Please enter the value of the sparse matrix UI.\nInput format is: row column value.\n";
    	cout << "Press any character from [a-z] to exit input process!\n";
    	
	while(cin>>row>>col>>value){
		UI.InitializeByInput(row, col, value);
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

	// Test case for step 3 of the CS610 Programming Project	
	sparse Q;
	Q.MatrixMultiply(A, B);
	Q.Print();

	sparse R;
	R.MatrixMultiply(B, D);
	R.Print();

	sparse S;
	S.MatrixMultiply(E, G);
	S.Print();

	sparse T;
	T.MatrixMultiply(G, E);
	T.Print();

	sparse U;
	U.MatrixMultiply(Q, H);
	U.Print();

	sparse V;
	V.MatrixMultiply(S, T);
	V.Print();

	sparse W;
	W.MatrixMultiply(R, S);
	W.Print();


	sparse X;
	X.Power(D, 5);
	X.Print();

	sparse Y;
	Y.Power(C, 8);
	Y.Print();

	sparse Z;
	Z.Power(B, 10);
	Z.Print();

	sparse AA;
	AA.Power(F, 2);
	AA.Print();

	sparse AB;
	AB.Power(G, 3);
	AB.Print();

	sparse AC;
	AC.Power(A, 4);
	AC.Print();

	sparse AD;
	AD.Power(E, 3);
	AD.Print();

	sparse AE;
	AE.Transpose(F);
	AE.Print();

	sparse AF;
	AF.Transpose(E);
	AF.Print();

	sparse AG;
	AG.Transpose(V);
	AG.Print();

	sparse AH;
	AH.Transpose(L);
	AH.Print();

	sparse T1, T2, T3, T4, T5, AI;
	T1.Add(A, B);
	T2.Transpose(T1);
	T3.Transpose(A);
	T4.Transpose(B);
	T5.Subtract(T2, T3);
	AI.Subtract(T5, T4);
	AI.Print();

	sparse T11, T12, T13, T14, T15, AJ;
	T11.MatrixMultiply(A, B);
	T12.Transpose(T11);
	T13.Transpose(B);
	T14.Transpose(A);
	T15.MatrixMultiply(T13, T14);
	AJ.Subtract(T12, T15);
	AJ.Print();
	
	// Take user input, for user defined sparse matrix, not part of the test set.
	sparse UI;
	TakeUserInput(UI);
	UI.Print();
	
	return 0;
}

