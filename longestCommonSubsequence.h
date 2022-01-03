

#ifndef LCS_LONGESTCOMMONSUBSEQUENCE_H
#define LCS_LONGESTCOMMONSUBSEQUENCE_H
/**
 * Metodo usato per calcolare la Longest Common Subsequence tra 2 file inserendo il risultato in un terzo file
 * @param path1 Path del primo file da confrontare
 * @param path2 Path del secondo file da confrontare
 * @param path3 Path dove viene generato il file contenente la sottosequenza
 */
void calculateLCS(char *, char *, char *);


/**
 * Metodo utilizzato per costruire la matrice in accordo all'implementazione dell'algoritmo del LCS
 * derivandone poi la lunghezza della LCS
 * @param dim1 Dimensione del primo file passato in input
 * @param dim2 Dimensione del secondo file passato in input
 * @param sequence1 Array contenente il contenuto del primo file passato in input
 * @param sequence2 Array contenente il contenuto del secondo file passato in input
 * @param matrix Matrice nella quale avvengono le modifiche
 */
void lcsLength(int ,int ,const char* ,const char* , int** );


/**
 * Funzione di Supporto che trova il massimo tra i 2 valori passati in input
 * @param a Primo valore passato
 * @param b Secondo valore passato
 * @return Il massimo tra a e b
 */
int max(int,int);

#endif //LCS_LONGESTCOMMONSUBSEQUENCE_H

