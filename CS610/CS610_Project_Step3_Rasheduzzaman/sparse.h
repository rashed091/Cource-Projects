// sparse.h
// CS610 Sparse Matrices Project
// Created by MD RASHEDUZZAMAN, NJIT ID#31349162
// email: mr468@njit.edu, rashed091nsu@gmail.com

#ifndef _SPARSE_H
#define _SPARSE_H

#include <iostream>
#include <new>
#include <cstdio>


struct Node{
	int row;
	int column;
	int value;
	Node * row_link;
	Node * column_link;
	Node(int r = 0, int c = 0, int v = 0, Node * rl = NULL, Node * cl = NULL){
		row  = r;
		column = c;
		value = v;
		row_link = rl;
		column_link = cl;
	}
	
};

class sparse{
private:
	Node * Row;
	Node * Col;
public:
	sparse();
	~sparse();
	void getSize();
	void Initialize();
	void InitializeByInput();
	void InitializeByInput(int rv, int cv, int value);
	void InitializeByFormula(char ch);
	int formulas(int i, int j, char f);
	int expSquaring(int base, int exp);
	void Print();
	void scalarMultiply(int scalar, sparse& T);
	void Add(sparse& A, sparse& B);
	void Subtract(sparse& A, sparse& B);
	void MatrixMultiply(sparse& A, sparse& B);
	void Power(sparse& A, int exp);
	void Transpose(sparse& A);
};


#endif 	
