#include <stdio.h>

int main(void)
{
    int c1, c2, c3;

    printf("Inserisci primo carattere: ");
    c1 = getchar();

    printf("\nInserisci secondo carattere: ");
    c2 = getchar();

    printf("\nInserisci terzo carattere: ");
    c3 = getchar();

    printf("\n\nHai inserito i caratteri:\n");
    printf("c1: %c\n", c1);
    printf("c2: %c\n", c2);
    printf("c3: %c\n", c3);

    return 0;
}
