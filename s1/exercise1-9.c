#include <stdio.h>
//count tab space or newline

int main() {
  int c;
  while ((c = getchar()) != EOF)
    if (c == ' ') {
      putchar(' ');
      while ((c = getchar()) == ' ');
    } else {
      putchar(c);
    }
}
