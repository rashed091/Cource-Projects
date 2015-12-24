#include"ast.h"
#include"symbol.h"

void insertTree(int type,nodeType * n){
    switch(n->type){
    case typeID:
        if(!lookup(n->id.variable_name))
            insert(n->id.lexeme_type,type,n->id.variable_name);
        else{
            printf("\n\n-------------------------------------------------");
            printf("\n|  Error: Multiple Declaration of Variable '%s'! |",n->id.variable_name);
            printf("\n-------------------------------------------------\n\n");
        }
        break;
    case typeOPR:
        insertTree(type,n->opr.op1);
        insertTree(type,n->opr.op2);
        break;
    default:
        printf("insertTree()function has a problem!\n");
        break;
    }

}

nodeType *mkleafINT(int value){
    nodeType *p;

    if ((p =(nodeType *) malloc(sizeof(nodeTypeINT)+sizeof(nodeTypeID))) == NULL)
        printf("out of memory!\n");

    p->type = typeINT;
    p->conI.var_type=261;
    p->conI.value=value;
    p->id.variable_name="";
    return p;
}

nodeType *mkleafFLOAT(float value){
    nodeType *p;

    if ((p =(nodeType *) malloc(sizeof(nodeTypeFLOAT)+ sizeof(nodeTypeID))) == NULL)
        printf("out of memory!\n");

    p->type = typeFLOAT;
    p->conF.var_type=262;
    p->conF.value=value;
    p->id.variable_name="";
    return p;
}

nodeType *mkleafID(int value,char * name ){
    nodeType *p;

    if ((p =(nodeType *) malloc(sizeof(nodeTypeID))) == NULL)
        printf("out of memory!\n");

    p->type = typeID;
    p->id.lexeme_type=value;
    p->id.var_type=-1;
    p->id.variable_name=strdup(name);
    return p;
}

nodeType *mkNode(int oper,nodeType * left,nodeType * right){
    nodeType *p;
    size_t size;

    size = sizeof(nodeTypeOPR) + (2 - 1) * sizeof(nodeType*);
    if ((p =(nodeType *) malloc(size)) == NULL)
        printf("out of memory!\n");

    p->type = typeOPR;
    p->opr.var_type=-1;
    p->opr.oper = oper;
    p->opr.op1=left;
    p->opr.op2=right;
    return p;
}

void freeNode(nodeType *p) {
    int i;
    if (!p) return;
    if (p->type == typeOPR) {
        for (i = 0; i <1; i++)
            freeNode(p->opr.op1);
            freeNode(p->opr.op2);
    }
    free (p);
}
