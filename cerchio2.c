#include <stdio.h>
int main()
{
  float raggio;
  double pigreco = 3.1415926535;
  float superficie;
  float circonferenza;

  printf("Inserisci il raggio: ");
  scanf("%f", &raggio);

  superficie = pigreco * raggio * raggio;
  circonferenza = 2.0 * pigreco * raggio;

  printf("La superficie è %f.\n", superficie);
  printf("La circonferenza è %f.\n", circonferenza);

  return 0;
}
