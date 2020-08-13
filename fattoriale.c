#include <stdio.h>

int main()
{
  int n;
  int fattoriale = 1;
  int count = 1;

  for (n = 1; n <= count; n += 1) {
    fattoriale *= n;
    printf("%d! = %d\n", n, fattoriale);
    count++;
    if (count > 5) {
        count = 0;
    }
  }

  return 0;
}