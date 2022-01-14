

#ifndef LCS_LONGESTCOMMONSUBSEQUENCE_H
#define LCS_LONGESTCOMMONSUBSEQUENCE_H
/**
 * Calcola la Longest Common Subsequence tra 2 file inserendo il risultato in un terzo file
 * @param path1 Path del primo file da confrontare
 * @param path2 Path del secondo file da confrontare
 * @param path3 Path dove viene generato il file contenente la sottosequenza
 */
void calculateLCS(char * path1, char * path2, char * path3);


/**
 * Costruisce la matrice in accordo all'implementazione dell'algoritmo del LCS
 * @param dim1 Dimensione del primo file passato in input
 * @param dim2 Dimensione del secondo file passato in input
 * @param sequence1 Array contenente il contenuto del primo file passato in input
 * @param sequence2 Array contenente il contenuto del secondo file passato in input
 * @param matrix Matrice nella quale avvengono le modifiche
 */
void lcsLength(long dim1,long dim2 ,const char* sequence1 ,const char* sequence2 , int** matrix);


/**
 * Funzione di Supporto che trova il massimo tra i 2 valori passati in input
 * @param a Primo valore passato
 * @param b Secondo valore passato
 * @return Il massimo tra i due valori
 */
int max(int a ,int b );

#endif //LCS_LONGESTCOMMONSUBSEQUENCE_H

