#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
  float fahr, cels; 
  int lower = 0;
  int upper = 300;
  int step  = 20;

  fahr = lower;
  while (fahr <= upper) {
    cels = (5.0/9) * (fahr-32);
    printf("%6.0f\t%5.1f\n", fahr, cels);
    fahr += step;
  }
}
