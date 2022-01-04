

#include <string.h>
#include <stdio.h>
#include "longestCommonSubsequence.h"
int main(int argc, char **argv) {
    if(strcmp(argv[1],argv[2])==0){
        printf("Il primo e secondo parametro sono uguali!\n");
        return 0;
    }
    if( strcmp(argv[1],argv[3])==0){
        printf("Il secondo e quarto parametro passati sono uguali!\n");
        return 0;
    }
    if( strcmp(argv[2],argv[3])==0){
        printf("Il terzo e quarto parametro sono uguali!\n");
        return 0;
    }

    if (argc==2 && (strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--help")==0)){
        printf("Inserire dopo il comando './extractlcs' i path(assoluti o relativi) dei file dai "
               "quali estrarre la Longest Common Subsequence seguiti dal path(assoluto o relativo) dove si vuole generare il file \n"
               "contenente la Longest Common Subsequence\n\n");
        return 0;
    }else if (argc !=4 ) {
        printf("Numero parametri errato! (necessari 3, inseriti: %d)!\nPer ulteriori info \"-h o --help\"\n\n", argc-1);
        return -1;
    }
    calculateLCS(argv[1], argv[2], argv[3]);
    return 0;
}
