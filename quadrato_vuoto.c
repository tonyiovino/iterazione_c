#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza;
  int altezza;
  int wf; /*Without Frist*/
  int lt; /*Less Three*/
  int count = 0;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if (lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  wf = lato - 1;
  lt = lato - 3;

  altezza = 0;
  while (altezza < lato) {
    putchar(character);

    larghezza = 1;
    while (larghezza < wf){

      if (altezza >= wf || count <= lt) {
        putchar(character);
      }

      else {
        putchar(' ');
      }

      larghezza++;
      count++;
    }
    putchar(character);
    putchar('\n');

    altezza++;
  }

  return 0;
}