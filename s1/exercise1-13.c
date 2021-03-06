#include <stdio.h>

//antidisestablishmentarianism is the longest reasonable word x~2 for margin
#define MAXLEN 64

// count digits, white space, others
int main() {
  int wordLengths[MAXLEN];
  for (int i = 0; i < MAXLEN; i++)
    wordLengths[i] = 0;

  int c;
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

  int longest = 0;
  for (int i = 0; i < MAXLEN; i++)
    if (wordLengths[i]) 
      longest = i+1;

  printf("Word Length Histogram\n");
  for (int i = 0; i < longest; i++){
    printf("%2d ", i+1);
    for (int j = 0; j < wordLengths[i]; j++)
      printf("#");
    printf("\n");
  }
}
