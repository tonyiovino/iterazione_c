#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza;
  int altezza = 0;
  int count = 0, count_2 = 0;
  int spazi;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  spazi = lato - 2;

  while(altezza < lato){

    larghezza = 0;
    while(larghezza < lato){
      putchar(character);

      larghezza++;

      putchar('\n');
      putchar(character);

      if(count == 1){
        while(spazi == count_2){
          putchar(' ');

          count_2++;
        }
      }
    }

    count++;
    altezza++;
  }

  return 0;
}