#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef enum { typeINT,typeFLOAT, typeID, typeOPR } nodeEnum;

/* constants INTERGER*/
typedef struct {
    nodeEnum type;              /* type of node */
    int var_type;
    int value;                  /* value of constant */
} nodeTypeINT;

/* constants FLOAT*/
typedef struct {
    nodeEnum type;              /* type of node */
    int var_type;
    float value;                  /* value of constant */
} nodeTypeFLOAT;

/* identifiers */
typedef struct {
    nodeEnum type;              /* type of node */
    int lexeme_type;                      /* subscript to ident array */
    int var_type;
    char * variable_name;
} nodeTypeID;

/* operators */
typedef struct {
    nodeEnum type;              /* type of node */
    int oper;                   /* operator */
    int var_type;
    union nodeTypeTag * op1,* op2;
} nodeTypeOPR;

typedef union nodeTypeTag {
    nodeEnum type;              /* type of node */
    nodeTypeFLOAT conF;         /* constants FLOAT*/
    nodeTypeINT conI;           /* constants INTERGER*/
    nodeTypeID id;              /* identifiers */
    nodeTypeOPR opr;
} nodeType;

nodeType *mkNode(int oper,nodeType * left,nodeType * right);
nodeType *mkleafID(int type,char * name);
nodeType *mkleafINT(int num);
nodeType *mkleafFLOAT(float num);
void insertTree(int value,nodeType * n);
void freeNode(nodeType * n);
//void printTree(nodeType * n);
