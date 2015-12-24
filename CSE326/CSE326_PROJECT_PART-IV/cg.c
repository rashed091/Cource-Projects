#include"cg.h"

void initiliz(){
    regTable[0].reg=strdup("AX");
    regTable[0].var="";
    regTable[0].is_used=0;

    regTable[1].reg=strdup("BX");
    regTable[1].var="";
    regTable[1].is_used=0;

    regTable[2].reg=strdup("CX");
    regTable[2].var="";
    regTable[2].is_used=0;

    regTable[3].reg=strdup("DX");
    regTable[3].var="";
    regTable[3].is_used=0;

}

char * getReg(){
    int i;
    for(i=0; i<4; i++){
        if(regTable[i].is_used==0){
            return regTable[i].reg;
        }
    }
    return "";
}
int find_t(char * name){
    int i;
    for(i=0; i<4; i++){
        if(strcmp(regTable[i].var,name)==0){
            return 1;
        }

    }
    return -1;
}

void set_reg(char * name,char * value){
    int i;
    for(i=0; i<4; i++){
        if(strcmp(regTable[i].reg,name)==0){
            regTable[i].var=strdup(value);
            regTable[i].is_used=1;
        }
    }
}

char * find_reg(char * name){
    int i;
    for(i=0; i<4; i++){
        if(strcmp(regTable[i].var,name)==0){
            return regTable[i].reg;

        }
    }
    return "";
}

void readICG(){
    FILE * cgin;
    cgin = fopen("ICG.txt","r");
    asmout = fopen("CG.txt","w");
    char mystring [200];

    if (cgin==NULL)
        perror ("Error opening file");
    else
    {
        fprintf(asmout,"  .MODEL TINY\n  .CODE\n\n");
        while (!feof(cgin)) {
            fgets (mystring , 200 , cgin);
            code_gen(mystring);
        }
    }
    fclose (cgin);
    fprintf(asmout,"  .EXIT\n  END\n");
    fclose (asmout);
}
void MOV(char * ch){
        rr=getReg();
        set_reg(rr,ch);
        fprintf(asmout,"  MOV %2s, %s\n",rr,ch);
}
void ADD(char * ch){
    fprintf(asmout,"  ADD ");
}
void SUB(char * ch){
    fprintf(asmout,"  SUB ");
}

void code_gen(char str[]){
    int i=1;
    char * pch;
    char * temp1, * temp2;
    pch = strtok (str," :=");
    while (pch != NULL)
    {
        if(i!=1){
            if(pch[0]=='t' && i==2){
                temp1=pch;
            }
            else if(isalpha(pch[0]) && i==2){
                temp1=pch;
            }
            else if(temp1[0]!='t' && isalpha(pch[0]) && i==3){
                fprintf(asmout,"  MOV %2s, %s\n",temp1,pch);
            }
            else if(pch[0]=='t' && i==3){
                temp2=find_reg(pch);
            }
            else if(isalpha(pch[0]) && i==3){
                MOV(pch);
                temp2=rr;
            }
            else if(pch[0]=='+' && i==4){
                ADD(pch);
            }
            else if(pch[0]=='-' && i==4){
                SUB(pch);
            }
            else if(pch[0]=='t' && i==5){
                fprintf(asmout,"%s, %s\n",temp2,pch);
                set_reg(temp2,temp1);
            }
            else if(isalpha(pch[0]) && i==5){
                fprintf(asmout,"%s, %s\n",temp2,pch);
                set_reg(temp2,temp1);
            }
            else{
            }
        }
        i++;
        pch = strtok (NULL, " :=");
    }
}
