#include <stdio.h>
#include <time.h>

int main()
{
    struct timespec intervallo;
    intervallo.tv_sec = 1;
    intervallo.tv_nsec = 0;
    int contatore;
    int numero;

    printf("Conto alla rovescia:\n\n");
    printf("Da che numero devo partire? ");
    scanf("%d",&numero);

    contatore = numero;

    while(contatore > 0){
        printf("%d\n", contatore);
        nanosleep(&intervallo, NULL);
        contatore--;
    }

    printf("Lanciato\n");

    return 0;
}
