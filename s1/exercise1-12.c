#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

//one word per line, that's a quine
//(it's not)
int main() {
  int c, nl, nw, nc;
  int state = OUT;

  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
      putchar('\n');
    }
    putchar(c);
  }
}

