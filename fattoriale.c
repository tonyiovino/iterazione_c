#include <stdio.h>

int main()
{
  int n;
  int fattoriale = 1;

  /*Fattoriale 1*/
  for (n = 1; n <= 1; n += 1) {
    fattoriale *= n;
  }
  printf("%d\n", fattoriale);

  /*Fattoriale 2*/
  fattoriale = 1;
  for (n = 1; n <= 2; n += 1) {
    fattoriale *= n;
  }
  printf("%d\n", fattoriale);

  /*Fattoriale 3*/
  fattoriale = 1;
    for (n = 1; n <= 3; n += 1) {
    fattoriale *= n;
  }
  printf("%d\n", fattoriale);

  /*Fattoriale 4*/
  fattoriale = 1;
    for (n = 1; n <= 4; n += 1) {
    fattoriale *= n;
  }
  printf("%d\n", fattoriale);

  /*Fattoriale 5*/
  fattoriale = 1;
    for (n = 1; n <= 5; n += 1) {
    fattoriale *= n;
  }
  printf("%d\n", fattoriale);

  return 0;
}