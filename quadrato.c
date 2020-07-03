#include <stdio.h>

int main(void)
{
  int lato;
  int cs = '*'; /*Carattere Speciale*/
  int x = 0, y = 0;


  do {
    printf("Inserisci il lato (min 1, max 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  while(lato > x){
    printf("%c", cs);

      while(lato > y){
        printf("%c", cs);

        y++;
      }
    
    if(lato > x){
    printf("\n");
    }
    
    x++;
  }



  return 0;
}
