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
#include<ctype.h>

// descriptor table

struct tab{
    char * reg;
    int is_used;
    char * var;
};

// global variable
typedef struct tab regg;
regg regTable[4];
FILE * asmout;
char * rr;

char * getReg();
void readICG();
void code_gen(char * state);
int find_t(char * name);
void set_reg(char * name,char * value);
char * find_reg(char * name);
void initiliz();
void MOV(char * ch);
void ADD(char * ch);
void SUB(char * ch);
