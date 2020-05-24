#include <stdio.h>
//count tab space or newline
int main() {
  int c;
  int  = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n' || c == '\t' || c == ' ')
      ++lines;
  printf("%d\n", lines);
}
