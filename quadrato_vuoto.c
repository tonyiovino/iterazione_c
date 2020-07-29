#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza = 0, altezza = 0;
  int wf; /*Without First*/

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if (lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  wf = lato - 1;

  while (larghezza < lato){
    putchar(character);
    larghezza++;
  }

  putchar('\n');
  altezza = 1;
  while (altezza < wf) {
    putchar(character);

    larghezza = 1;
    while (larghezza < wf){
      putchar(' ');

      larghezza++;
    }

    putchar(character);
    putchar('\n');

    altezza++;
  }

  if (lato != 1){
    altezza = 0;
    while (altezza < lato) {
      putchar(character);
      altezza++;
    }
    putchar('\n');
  }

  return 0;
}