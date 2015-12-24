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
    insert("KEYWORD","if");
    insert("KEYWORD","else");
    insert("KEYWORD","do");
    insert("KEYWORD","for");
    insert("KEYWORD","void");
    insert("KEYWORD","while");
    insert("KEYWORD","return");
    printf("\n\n");
    printf("------------------Input--------------------\n");

}

void insert(char * type,char * value){
    char key[100];
    strcpy(key,type);
    strcat(key,value);
    int hval=hash(key);
    int flag = loadFactor();

    if(flag==1){
        reAllocate();
    }

    if(strcmp(_table[hval].value,"")!=0){
        int hv=linearProbing(key);
        hval=hash2(hv);
    }
    strcpy(_table[hval].type,type);
    strcpy(_table[hval].value,value);
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
        if(strcmp(temp_table[i].value,"")!=0)
            insert(temp_table[i].type,temp_table[i].value);
    }
    free(temp_table);
}

void copy(int size){
    temp_table =(symTable *) malloc(sizeof(symTable[size]));

    if(temp_table==NULL)
        printf("Error allocating memory?");
    int i;
    for(i=0; i<size; i++){
        temp_table[i].type=(char *) malloc(20);
        temp_table[i].value=(char *) malloc(20);
    }
    for(i=0; i<size; i++){
        strcpy(temp_table[i].type,_table[i].type);
        strcpy(temp_table[i].value,_table[i].value);
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
        if(strcmp(_table[hval+c].value,"")!=0)
            c++;
        else
            break;
    }
    return (hval+c);
}


int lookup(char * value){
/*    char key[100];
    strcpy(key,type);
    strcat(key,value);
    int hval=hash(key)*/;
    int i=0;
    while(i<tableSize){

        if(strcmp(_table[i].value,value)==0){
            return 1;
        }
        i++;
    }
    return 0;
}
void print_table(){
    int i=0;
    printf("\n\n");
    printf("Index#       Type       Value\n");
    printf("------------------------------\n");

    for(i=0; i<tableSize; i++){
        if(strcmp(_table[i].value,"")!=0)
            printf("%3d         %s      %s\n",i,_table[i].type,_table[i].value);
    }
    printf("------------------------------\n");
    printf("Number of elements: %d\n",numElement);
}
void allocate_memory(){
    _table =(symTable *) malloc(sizeof(symTable[tableSize]));

    if(_table==NULL)
        printf("Error allocating memory?");
    int i;
    for(i=0; i<tableSize; i++){
        _table[i].type=(char *) malloc(20);
        _table[i].value=(char *) malloc(20);
    }
    for(i=0; i<tableSize; i++){
        strcpy(_table[i].type,"");
        strcpy(_table[i].value,"");
    }
}

void free_memory(){
    free(_table);
}


