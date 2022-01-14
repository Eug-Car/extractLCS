#ifndef LCS_READANDWRITE_H
#define LCS_READANDWRITE_H

/**
 * Calcola la dimensione del file passato in input
 * @param path Path del file di cui si vuole calcolare la dimensione
 * @return La dimensione del file
 */
long calcolaDim(char * path);


/**
 * Legge il contenuto di un file e lo salva
 * @param path Path del file di cui si vuole leggere il contenuto
 * @return Il contenuto del file
 */
char * read(char * path);

/**
 * Scrive su file il contenuto di un array
 * @param path Path del file dove scrivere i dati
 * @param res Array contenente i dati da scrivere
 */
void write(char * path,char * res);


#endif //LCS_READANDWRITE_H

