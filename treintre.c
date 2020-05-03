#include <stdio.h>

int main()
{
    int contatore = 0;
    int num;

    printf("Conta di 3 in 3\n\n");

    printf("Numero di partenza: ");
    scanf("%d",&num);
    
    while(contatore <= 4){

        printf("%d\n", num);
        num += 3;

        contatore++;
    }

    return 0;
}
