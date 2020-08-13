#include <stdio.h>

int main()
{
  int a, /*b, c, d*/;

  /*(a, b, c, d)s = (a, b, c, d) + "s"pace */
  int as, bs/*, cs, ds*/;

  printf("Figura A:\n\n");
  for (as = 1; as <= 10; as += 1) {
    for (a = 1; a <= as; a += 1) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
  putchar('\n');

  return 0;
}