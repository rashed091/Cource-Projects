/*
 *
 *  Created by MD. Rasheduzzaman on 10/6/12.
 *  Name:MD.Rasheduzzaman
 *  ID:0910647044
 *
 */

#include"symbol.h"

void init(){
    tableSize=7;
    numElement=0;
    allocate_memory();
    initilize();
}
void initilize(){
    insert(263,-1,"for");
    insert(264,-1,"do");
    insert(265,-1,"while");
    insert(266,-1,"if");
    insert(267,-1,"else");
    insert(268,-1,"return");
    insert(269,-1,"void");
    printf("\n\n");
    printf("------------------Input--------------------\n");

}

void insert(int tok,int type,char * name){
    char * key=strdup(name);
    int hval=hash(key);
    int flag = loadFactor();

    if(flag==1){
        reAllocate();
    }
    if(strcmp(_table[hval].name,"")!=0){
        int hv=linearProbing(key);
        hval=hash2(hv);
    }
    _table[hval].token=tok;
    _table[hval].type=type;
    strcpy(_table[hval].name,name);
    numElement++;
}

int hash2(int key){
        return key % tableSize;
}

int hash(char * key){
    int hval=0,i=0;
    int limit=strlen(key);
    for(i=0; i<limit; i++){
        hval=37 * hval + key[i];
    }
    hval %=tableSize;
    if(hval<0)
        hval +=tableSize;
    return hval;
}

int loadFactor(){
    double x=numElement;
    double y=tableSize;
    if((x/y)>0.5)
        return 1;
    else
        return 0;
}

void reAllocate(){
    int oldS=tableSize,i=0;
    int size=nextPrime(2*tableSize);
    tableSize=size;

    copy(oldS);
    free_memory();
    allocate_memory();

    numElement=0;
    for(i=0; i<oldS; i++){
        if(strcmp(temp_table[i].name,"")!=0)
            insert(temp_table[i].token,temp_table[i].type,temp_table[i].name);
    }
    free(temp_table);
}

void copy(int size){
    temp_table =(symTable *) malloc(sizeof(symTable[size]));

    if(temp_table==NULL)
        printf("Error allocating memory?");
    int i;
    for(i=0; i<size; i++){
        temp_table[i].name=(char *) malloc(20);
    }
    for(i=0; i<size; i++){
        strcpy(temp_table[i].name,_table[i].name);
        temp_table[i].token=_table[i].token;
        temp_table[i].type=_table[i].type;
    }

}

int nextPrime(int size){
    int i=0;
    for(i=2; i<size; i++){
        while(size%i==0)
            size++;
    }
    return size;
}
int linearProbing(char * key){
    int hval=hash(key);
    int c=0;
    while(c<tableSize){
        if(strcmp(_table[hval+c].name,"")!=0)
            c++;
        else
            break;
    }
    return (hval+c);
}

int findType(char *name){
    int i=0;
    if(name==NULL)
        return -1;
    while(i<tableSize){

        if(strcmp(_table[i].name,name)==0){
            return _table[i].type;
        }
        i++;
    }
    return -1;
}

int lookup(char * name){
    int i=0;
    while(i<tableSize){

        if(strcmp(_table[i].name,name)==0){
            return 1;
        }
        i++;
    }
    return 0;
}
void print_table(){
    int i=0;
    printf("\n\n");
    printf("--------------------Readme--------------------\n");
    printf("  INTEGER_TYPE = 261        FLOAT_TYPE = 262  \n");
    printf("  VOID_TYPE    = 263        NO_TYPE    = -1   \n");
    printf("---------------------End----------------------\n");
    printf("\nIndex#   Token       Type     Value\n");
    printf("----------------------------------------------\n");

    for(i=0; i<tableSize; i++){
        if(strcmp(_table[i].name,"")!=0)
            printf("%3d    %6d     %6d      %s\n",i,_table[i].token,_table[i].type,_table[i].name);
    }
    printf("----------------------------------------------\n");
    printf("Number of elements: %d\n",numElement);
}
void allocate_memory(){
    _table =(symTable *) malloc(sizeof(symTable[tableSize]));

    if(_table==NULL)
        printf("Error allocating memory?");
    int i;
    for(i=0; i<tableSize; i++){
        _table[i].name=(char *) malloc(20);
    }
    for(i=0; i<tableSize; i++){
        strcpy(_table[i].name,"");
        _table[i].token=0;
        _table[i].type=-1;
    }
}

void free_memory(){
    free(_table);
}



