#include <stdio.h>

/* count lines in input */

int main() {
  int c;
  int lines = 0;

  //ahahahahahahaha oh my god this style is amazing
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++lines;
  printf("%d\n", lines);
}
