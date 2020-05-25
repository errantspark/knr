#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

int main() {
  int c, nl, nw, nc;
  int state = OUT;

  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == '\n' || c == '\t' || c == ' ')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

