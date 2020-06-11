#include <stdio.h>

int main(){

    int num = 0;

    printf("Tavola Pitagorica:\n");

    num = 1;
    while(num <= 10){
        printf("%d     ", num);

        num++;
    }

    printf("\n");

    num = 2;
    while(num <= 20){
        printf("%d     ", num);

        num += 2;
    }

    printf("\n");

    num = 3;
    while(num <= 30){
        printf("%d     ", num);

        num += 3;
    }

    printf("\n");

    return 0;
}
