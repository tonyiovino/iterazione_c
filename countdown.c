#include <stdio.h>
#include <time.h>

int main()
{
    int contatore;

    struct timespec intervallo;
    intervallo.tv_sec = 1;
    intervallo.tv_nsec = 0;

    printf("Conto alla rovescia:\n\n");
    printf("Da che numero devo partire? ");
    scanf("%d",&contatore);
    
    printf("%d\n", contatore);
    nanosleep(&intervallo, NULL);
    contatore--;

    printf("Lanciato\n");

    return 0;
}
