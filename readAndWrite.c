

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "readAndWrite.h"

int calcolaDim(char *path) {
    FILE *file= fopen(path,"r+");
    if(file==NULL){
        exit(1);
    }
    fseek(file,0,SEEK_END);
    int dim= (int) ftell(file);
    fclose(file);
    return dim;
}


char* read(char *path){
    FILE *file= fopen(path,"r+");
    if(file==NULL){
        exit(0);
    }
    int dim=calcolaDim(path);
    char *tmp=(char* ) malloc(sizeof (char) * (dim+1));
    fread(tmp,sizeof(char),dim,file);
    tmp[dim]= '\0';
    fclose(file);
    return tmp;
}

void write(char *path, char* res){
    unsigned long dim = strlen(res);
    FILE *file= fopen(path,"w+");
    if(file==NULL){
        exit(1);
    }
    fwrite(res,sizeof(char),dim,file);
    fclose(file);
}



