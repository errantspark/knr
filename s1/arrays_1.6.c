#include <stdio.h>

// count digits, white space, others
int main() {
  int i, c, nw, no;
  nw = no = 0;

  int ndigit[10];
  for (i =0; i < 10; i++) {
    //wow i had a 1 instead of an i there and i guess i just saw bits of
    //memory that had random shit in them as a result
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nw;
    else
      ++no;
  }

  printf("digits =");
  for (i = 0; i<10; i++)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nw, no);
}

