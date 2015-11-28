#include <stdio.h>

int main() {
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celcius = lower;
  printf("Celcius Fahrenheit\n");
  while (celcius <= upper) {
    fahr = ((9.0/5.0) * celcius) + 32;
    printf("%7.1f %10.0f\n", celcius, fahr);
    celcius += step;
  }
}
