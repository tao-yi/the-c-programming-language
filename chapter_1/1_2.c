#include <stdio.h>

main(){
  int fahr, celsius;
  int lower, upper, step;
  lower = 0; // lower limit of the temperature
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    // %3d means 3 digits wide
    // %6d means 6 digits wide
    printf("%3d %6d\n", fahr, celsius); 
    fahr = fahr + step;
  }
}