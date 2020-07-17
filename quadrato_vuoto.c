#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza;
  int altezza;
  int spazi;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if (lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  spazi = lato - 1;

  altezza = 0;
  while (altezza < lato) {
    putchar(character);

    larghezza = 1;
    while (larghezza < spazi){

      if (altezza <= spazi) {
        putchar(character);
      }

      else {
        putchar(' ');
      }

      larghezza++;
    }
    putchar(character);
    putchar('\n');

    altezza++;
  }

  return 0;
}