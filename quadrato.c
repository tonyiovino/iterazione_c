#include <stdio.h>

int main(void)
{
  int lato;
  int H = '#';
  int dis;


  do {
    printf("Inserisci il lato (min 1, max 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  dis = H * lato;

  printf(dis);

  return 0;
}
