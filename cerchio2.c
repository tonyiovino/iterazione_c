#include <stdio.h>
int main()
{
  double raggio;
  double pigreco = 3.1415926535;
  double superficie;
  double circonferenza;

  printf("Inserisci il raggio: ");
  scanf("%f", &raggio);

  superficie = pigreco * raggio * raggio;
  circonferenza = 2.0 * pigreco * raggio;

  printf("La superficie è %f.\n", superficie);
  printf("La circonferenza è %f.\n", circonferenza);

  return 0;
}
