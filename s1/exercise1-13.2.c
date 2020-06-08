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
  int mode = 0;
  for (int i = 0; i < MAXLEN; i++)
    if (wordLengths[i]) {
      longest = i+1;
      mode > wordLengths[i]?:(mode = wordLengths[i]);
    }

  printf("Word Length Histogram\n\n");

  for (int i = 0; i < mode+1; i++){
    for (int j = 0; j < longest; j++){
      if (mode==i) 
        printf(" %2d ", j+1);
      else
        if (mode-(i+1) < wordLengths[j])
          printf(" ## ");
        else 
          printf("    ");
    }
    printf("\n");
  }
}
