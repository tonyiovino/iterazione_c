#include <stdio.h>

int main(){

    int numero;
    int maggiore;
    int count = 0;
    
    printf("Inserisci 10 interi per determinare il maggiore.\n");
    scanf("%d", &maggiore);

    while(count < 9){
        scanf("%d", &numero);

        if(numero > maggiore){
            maggiore = numero;
        }
        
        count++;
    }

    printf("\nIl numero maggiore è: %d\n\n", maggiore);

    return 0;
}