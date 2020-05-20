#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
  int fahr, cels; 
  int lower = 0;
  int upper = 300;
  int step  = 20;

  fahr = lower;
  while (fahr <= upper) {
    cels = 5 * (fahr-32) /9;
    printf("%d\t%d\n", fahr, cels);
    fahr += step;
  }
}
