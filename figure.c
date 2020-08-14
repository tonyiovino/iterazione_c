#include <stdio.h>

int main()
{
  int carattere;
  int spazio;
  int num = 1;

  printf("Figura A:\n\n");
  for (num = 1; num <= 5; num += 1) {
    for (carattere = 1; carattere <= num; carattere++) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
  putchar('\n');


  printf("Figura B:\n\n");
  for (num = 5; num >= 1; num -= 1) {
    for (carattere = 1; carattere <= num; carattere++) {
      putchar('*');
    }
    putchar('\n');

  }
  putchar('\n');
  putchar('\n');


  printf("Figura C:\n\n");
  for (spazio = 1; spazio <= 5; spazio += 1) {
    for (carattere = 1; carattere <= spazio; carattere++) {
      putchar(' ');
    }
    for (carattere = spazio; carattere <= 5; carattere++) {
      putchar('*');
    }

    putchar('\n');
  }
  putchar('\n');
  putchar('\n');


  printf("Figura D:\n\n");
  for (spazio = 5; spazio >= 1; spazio -= 1) {
    for (carattere = 1; carattere <= spazio; carattere++) {
      putchar(' ');
    }
    for (carattere = spazio; carattere <= 5; carattere++) {
      putchar('*');
    }

    putchar('\n');
  }
  putchar('\n');
  putchar('\n');

  return 0;
}