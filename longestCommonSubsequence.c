

#include <stdlib.h>
#include <stdio.h>
#include "readAndWrite.h"
#include "longestCommonSubsequence.h"

void calculateLCS(char *path1, char *path2, char *path3) {
    char* sequence1=read(path1);
    long dim1 = calcolaDim(path1);
    char* sequence2=read(path2);
    long dim2 = calcolaDim(path2);


    int **matrix=(int **) malloc((dim1+1) * sizeof (int*));
    if(matrix==NULL){
        perror("Errore durante la creazione della matrice");
        exit(1);
    }
    for(int i=0;i<dim1+1;i++)
        matrix[i]=(int *) malloc((dim2+1) * sizeof (int));


    lcsLength(dim1,dim2,sequence1,sequence2,matrix);
    int index = matrix[dim1][dim2];
    char *lcs = (char *) malloc(sizeof(char) * (index + 1));
   if(lcs==NULL){
        perror("Errore durante la creazione dell'array soluzione");
        exit(1);
    }
    lcs[index]='\0';
    long i = dim1, j = dim2;
    while (i > 0 && j > 0) {

        if (sequence1[i - 1] == sequence2[j - 1]) {
            lcs[index - 1] = sequence1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (matrix[i - 1][j] >= matrix[i][j - 1])
            i--;

        else
            j--;
    }
    write(path3, lcs);
    free(sequence1);
    free(sequence2);
    for(int p=0;p<dim1+1;p++){
        free(matrix[p]);
    }
    free(matrix);
    free(lcs);
}


void lcsLength(long dim1,long dim2,const char* sequence1, const char* sequence2, int** matrix){
    for ( int a = 0 ; a <= dim1; a++) {
        for (int b = 0; b <= dim2; b++) {
        
            if (a == 0 || b == 0) {
                matrix[a][b] = 0;
            }
               
            else if (sequence1[a - 1] == sequence2[b - 1]) {
                matrix[a][b] = matrix[a - 1][b - 1] + 1;
            }

            else {
                matrix[a][b] = max(matrix[a - 1][b], matrix[a][b - 1]);
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
