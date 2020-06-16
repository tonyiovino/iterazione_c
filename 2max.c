#include <stdio.h>

int main(){

    int numero;
    int maggiore;
    int maggiore_2;
    int count = 0;

    printf("Inserisci 10 interi per determinare il maggiore.\n");
    scanf("%d", &maggiore);
    scanf("%d", &maggiore_2);

    while(count < 8){
        scanf("%d", &numero);

        if(numero > maggiore){
            maggiore = numero;
        }

        if(numero < maggiore && numero > maggiore_2){
            maggiore_2 = numero;
        }

        count++;
    }

    printf("\nIl numero maggiore è: %d\n\n", maggiore);

    return 0;
}