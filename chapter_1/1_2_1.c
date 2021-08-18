#include <stdio.h>

main(){
  float fahr, celsius;
  int lower, upper, step;
  lower = 0; // lower limit of the temperature
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  while (fahr <= upper) {
    // If we had written `fahr-32`
    // the 32 would be automatically converted to floating point.
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    
    printf("%3.0f %6.1f\n", fahr, celsius); 
    fahr = fahr + step;
  }
}