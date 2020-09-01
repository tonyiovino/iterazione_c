#include <stdio.h>
int main()
{
  int i, num;
  int peso;
  int bit;
  int count;

  for (count = 0; count <= 255; count++){
    num = count;
    peso = 128;
    printf("%5d  ", num);
    for (i = 0; i < 8; i++) {
      if (num >= peso) {
        num -= peso;
        peso /= 2;
        bit = 1;
      }

      else {
        peso /= 2;
        bit = 0;
      }

      printf("%2d", bit);
    }
    printf("  ");

    num = count;
    peso = 64;
    for (i = 0; i < 3; i++) {
      bit = num / peso;
      printf("%2d", bit);
      num %= peso;
      peso /= 8;
    }
    printf("   ");

    num = count;
    peso = 16;
    for (i = 0; i < 2; i++) {
      bit = num / peso;
      switch(bit) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          printf("%d", bit);
          break;
        case 10:
          printf("A");
          break;
        case 11:
          printf("B");
          break;
        case 12:
          printf("C");
          break;
        case 13:
          printf("D");
          break;
        case 14:
          printf("E");
          break;
        case 15:
          printf("F");
          break;
        default:
          printf(" ");
      }
      num %= peso;
      peso /= 16;
    }
    printf("\n");
  }

  return 0;
}