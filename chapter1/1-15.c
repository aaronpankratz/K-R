#include <stdio.h>

float convertFahrenheitToCelcius(float fahr);

/*
  Print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300 floating-point version
 */
int main() {
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  printf("Fahrenheit Celcius\n");
  while (fahr <= upper) {
    celcius = convertFahrenheitToCelcius(fahr);
    printf("%10.0f %7.1f\n", fahr, celcius);
    fahr += step;
  }
}

float convertFahrenheitToCelcius(float fahr) {
    return (5.0/9.0) * (fahr - 32);
}
