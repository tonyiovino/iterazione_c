#include <stdio.h>

int main()
{
  int seq1, seq2, seq3, seq4;

  printf("A) ");
  for (seq1 = 1; seq1 <= 8; seq1++) {
    if (seq1 == 8){
        printf("%d;", seq1);
    }
    else{
        printf("%d, ", seq1);
    }
  }
  putchar('\n');

  printf("B) ");
  for (seq2 = 3; seq2 <= 23; seq2 += 5) {
    if (seq2 == 23){
        printf("%d;", seq2);
    }
    else{
        printf("%d, ", seq2);
    }
  }
  putchar('\n');

  printf("C) ");
  for (seq3 = 20; seq3 >= -10; seq3 -= 6) {
    if (seq3 == -10){
        printf("%d;", seq3);
    }
    else{
        printf("%d, ", seq3);
    }
  }
  putchar('\n');

  printf("D) ");
  for (seq4 = 19; seq4 <= 51; seq4 += 8) {
    if (seq4 == 51){
        printf("%d.", seq4);
    }
    else{
        printf("%d, ", seq4);
    }
  }
  putchar('\n');


  return 0;
}