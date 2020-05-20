#include <stdio.h>

#define LOWER -20
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table */
main()
{
  int fahr; 
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%6d\t%5.1f\n", fahr, (5.0/9) * (fahr-32));
  }
}
