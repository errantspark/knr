#include <stdio.h>

//i don't actuallyb understand how you're supposed to enter a backspace into this, but it probably works
int main() {
  int c;
  while ((c = getchar()) != EOF) 
    switch(c) {
      case '\t' :
        printf("\\t");
        break;

      case '\\' :
        printf("\\\\");
        break;
         
      case '\b' :
        printf("\\b");
        break;

      default : 
        putchar(c);
    }
}
