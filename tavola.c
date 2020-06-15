#include <stdio.h>

int main(){

    int nc = 0;  /*Numero Colonna*/
    int nr = 0;  /*Numero Riga*/
    int np = 0;  /*Numero Prodotto*/

    printf("Tavola Pitagorica:\n");

    nc = 1;

    while(nc <= 10){
        nr = 1;

        while(nr <= 10){
            np = nc * nr;
            printf("%-5d", np);

            nr++;
        }

        printf("\n");

        nc++;
    }

    return 0;
}