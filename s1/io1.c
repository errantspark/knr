#include <stdio.h>

//in to out v1
main() {
  int c;
  c=getchar();
  while(c != EOF) {
    putchar(c+1);
    c=getchar();
  }
}
