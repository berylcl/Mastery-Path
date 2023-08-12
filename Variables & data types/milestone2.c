#include <stdio.h>
int main()
{
  double tempCelsius;
  printf("Enter degree in °C");
  scanf("%lf", &tempCelsius);
  double result;
  result = tempCelsius * 1.8 + 32;
  printf("The temp in farenheit is %.2lf",result);
  return 0;
}