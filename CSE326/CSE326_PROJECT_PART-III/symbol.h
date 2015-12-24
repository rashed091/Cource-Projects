/*
 *
 *  Created by MD. Rasheduzzaman on 10/6/12.
 *  Name:MD.Rasheduzzaman
 *  ID:0910647044
 *
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// symbol table structure
struct table{
    int token;
    int type;
    char * name;
};

// global variable
typedef struct table symTable;
symTable * _table;
symTable * temp_table;
int numElement;
int tableSize;

// functions
void insert(int tok,int type,char * name);
int findType(char * name);
int lookup(char * name);
int linearProbing(char * key);
int hash2(int key);
int hash(char * key);
void print_table();
void init();
void initilize();
void allocate_memory();
void reAllocate();
void copy(int size);
int loadFactor();
void free_memory();
int nextPrime(int size);
