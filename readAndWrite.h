#ifndef LCS_READANDWRITE_H
#define LCS_READANDWRITE_H


/**
 * Metodo usato per leggere un file e salvare il contenuto in un array
 * @param path Path del file di cui si vuole leggere il contenuto
 * @return Restituisce un' array che contenente il file
 */
char * read(char * );


/**
 * Metodo usato per scrivere su file il contenuto di un puntatore
 */
void write(char *,char *);


/**
 * Calcola la dimensione del file passato in input
 * @param path Path del file di cui si vuole calcolare la dimensione
 * @return  La dimensione del file
 */
int calcolaDim(char *);


#endif //LCS_READANDWRITE_H

