#include <stdio.h>

int main(){

    int numero;
    int maggiore, maggiore_2;
    int count = 0;

    printf("Inserisci 10 interi per determinare i maggiori.\n");
    scanf("%d", &maggiore);

    scanf("%d", &numero);

    if(maggiore < numero){
        maggiore_2 = maggiore;
        maggiore = numero;
    }

    else if(maggiore > numero && maggiore_2 < numero){
        maggiore_2 = numero;
    }

    while(count < 8){
        scanf("%d", &numero);
        
        if(maggiore < numero){
        maggiore_2 = maggiore;
        maggiore = numero;
        }

        if(maggiore_2 < numero){
            maggiore_2 = numero;
        }

        count++;
    }

    printf("\nIl numero maggiore è: %d\n\n", maggiore);
    printf("\nIl secondo numero maggiore è: %d\n\n", maggiore_2);

    return 0;
}