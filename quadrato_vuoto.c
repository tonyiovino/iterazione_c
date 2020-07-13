#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza;
  int altezza = 0;
  int count = 0;
  int half, spazi;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  half = lato / 2;

  while(altezza < lato){
    if(count == half){
      putchar(character);

      while(half == spazi){
        putchar(' ');

        spazi++;

        if(spazi == half){
          printf("\n");
        }
      }
      
    }

    else{
      larghezza = 0;
      while(larghezza < lato){
        putchar(character);

        larghezza++;
      }
    }
    putchar('\n');

    altezza++;
    count ++;
  }

  return 0;
}