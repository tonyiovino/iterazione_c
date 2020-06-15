#include <stdio.h>  /*Include le funzione che ci sono all'interno della libreria stdio.h*/

int main(){  /*Inizio della funzione main()*/

    int nc = 0;  /*Numero Colonna*/
    int nr = 0;  /*Numero Riga*/
    int np = 0;  /*Numero Prodotto*/

    printf("Tavola Pitagorica:\n");  /*Stampa quello che c'è scritto all'interno delle stringe e va a capo.*/

    nc = 1;  /*Assegna il valore 1 a nc*/

    while(nc <= 10){         /*Inizia la funzione while(Finché nc è minore o uguale a 10, fai questo:)*/
        nr = 1;                  /*Assegna il valore 1 a nr*/

        while(nr <= 10){       /*Inizia la funzione while(Finché nr è minore o uguale a 10, fai questo:)*/
            np = nc * nr;          /*Assegna il prodotto di nc e nr, a np*/
            printf("%-5d", np);    /*Stampa np con spazi (Stampa in forma decimale con un minimo di 5 caratteri. Visto che non np è un intero, lascia gli spazi.)*/

            nr++;                  /*nr viene incrementato di 1*/
        }                      /*Finisce la funzione while()*/

        printf("\n");          /*Va a capo*/

        nc++;                  /*nc viene incrementato di 1*/
    }                        /*Finisce la funzione while()*/

    return 0;                /*Restitisce il valore 0 alla macchina*/
}            /*Fine della funzione main()*/