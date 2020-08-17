#include <stdio.h>

int main()
{
  int riga, tot_righe;
  int carattere;
  int spazio;

  do {
    printf("Inserisci il numero delle righe (dispari): ");
    scanf("%d", &tot_righe);
    printf("\n");

  }while ( (tot_righe < 0 || tot_righe > 19) || (tot_righe % 2 == 0) );

  for (riga = 1; riga <= tot_righe; riga++){
    for (spazio = tot_righe - riga; spazio >= 1; spazio--){
      putchar(' ');
    }
    for (carattere = 1; carattere <= (riga*2)-tot_righe; carattere++){
      putchar('*');
    }
    printf("\n");
  }
  for (riga = tot_righe-1; riga >= 1; riga--){
    for (spazio = 1; spazio <= tot_righe - riga; spazio++){
      putchar(' ');
    }
    for (carattere = 1; carattere <= (riga*2)-tot_righe; carattere++){
      putchar('*');
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}