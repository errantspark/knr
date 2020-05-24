#include <stdio.h>

//character count v1
main() {
  long nc;
  nc = 0;
  while (getchar() != EOF) ++nc;
  printf("%ld\n", nc);
}
