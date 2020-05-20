#include <stdio.h>

//in to out v2
main() {
  int c;
  c=getchar();
  putchar(EOF);
  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
