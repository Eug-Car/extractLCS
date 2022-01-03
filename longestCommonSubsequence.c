

#include <stdlib.h>
#include <stdio.h>
#include "readAndWrite.h"
#include "longestCommonSubsequence.h"

void calculateLCS(char *path1, char *path2, char *path3) {

    char* sequence1=read(path1);
    int dim1 = calcolaDim(path1);
    char* sequence2=read(path2);
    int dim2 = calcolaDim(path2);

    //Alloco il vettore delle righe della matrice in cui ogni elemento è un puntatore
    int **matrix=(int **) malloc((dim1+1) * sizeof (int*));
    if(matrix==NULL){
        perror("Errore durante la creazione della matrice");
        exit(1);
    }
    //Per ogni riga alloco dim2 colonne
    for(int i=0;i<dim1+1;i++)
        matrix[i]=(int *) malloc((dim2+1) * sizeof (int));



    lcsLength(dim1,dim2,sequence1,sequence2,matrix);
    int index = matrix[dim1][dim2];
    char *lcs = (char *) malloc(sizeof(char) * (index + 1));
    if(lcs==NULL){
        perror("Errore durante la creazione dell'array soluzione");
        exit(1);
    }
    lcs[index] = '\0';
    long i = dim1, j = dim2;
    while (i > 0 && j > 0) {
        //I caratteri confrontati sono uguali, mi muovo diagonalmente lungo la matrice
        if (sequence1[i - 1] == sequence2[j - 1]) {
            lcs[index - 1] = sequence1[i - 1];
            i--;
            j--;
            index--;
        }
        //Mi muovo verticalmente nella matrice
        else if (matrix[i - 1][j] >= matrix[i][j - 1])
            i--;
        //Mi muovo orizzontalmente nella matrice
        else
            j--;
    }
    write(path3, lcs);
    free(sequence1);
    free(sequence2);
    free(matrix);
    free(lcs);
}


void lcsLength(int dim1,int dim2,const char* sequence1, const char* sequence2, int** matrix){
    for ( int l = 0 ; l <= dim1; l++) {
        for (int m = 0; m <= dim2; m++) {
            //Se mi trovo nella riga o colonna di indice 0 inserisco 0
            if (l == 0 || m == 0) {
                matrix[l][m] = 0;
            }
                //Se i caratteri confrontati sono uguali prendo il valore dalla cella
                //che si trova una riga sopra e una colonna prima(Diagonale \)
            else if (sequence1[l - 1] == sequence2[m - 1]) {
                matrix[l][m] = matrix[l - 1][m - 1] + 1;
            }
                //Inserisco il valore maggiore tra quello nella cella precedente o quello nella cella sopra
            else {
                matrix[l][m] = max(matrix[l - 1][m], matrix[l][m - 1]);
            }
        }
    }
}

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}