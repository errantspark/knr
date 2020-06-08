#include <stdio.h>

//antidisestablishmentarianism is the longest reasonable word x~2 for margin
#define MAXLEN 64
#define NO 0
#define YES 1
// count digits, white space, others
int main() {
  int wordLengths[MAXLEN];
  for (int i = 0; i < MAXLEN; i++)
    wordLengths[i] = 0;

  int c, inWord;
  int length = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      if (length >= MAXLEN) 
        wordLengths[MAXLEN-1]++;
      else if (length) 
        wordLengths[length-1]++;
      length = 0;
    } else 
      length++;
  }

  for (int i = 0; i < MAXLEN; i++)
    printf("%d ", wordLengths[i]);
}
