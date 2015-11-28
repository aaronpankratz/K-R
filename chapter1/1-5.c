#include <stdio.h>

/*
  Print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300 floating-point version
 */
int main() {
  int fahr;

  printf("Fahrenheit Celcius\n");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%10d %7.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
}
