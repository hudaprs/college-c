#include <stdio.h>

void main()
{
  double celcius, fahrenheit, rheamur, kelvin;

  printf("Input Suhu(Celcius): ");
  scanf("%lf", &celcius);

  fahrenheit = (celcius * 1.8) + 32;
  rheamur = (celcius * 0.8);
  kelvin = (celcius + 273.15);

  printf("Celcius: %.2lf \n", celcius);
  printf("Fahrenheit: %.2lf \n", fahrenheit);
  printf("Rheamur: %.2lf \n", rheamur);
  printf("Kelvin: %.2lf \n", kelvin);
}