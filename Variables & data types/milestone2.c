#include <stdio.h>
int main()
{
  //celsius tp F
  double tempCelsius;
  printf("Enter degrees in °C");
  scanf("%lf", &tempCelsius);
  double result;
  result = tempCelsius * 1.8 + 32;
  printf("The temp in Farenheit is %.2lf F \n",result);
  //F to celsius
  double tempFarenheit;
  printf("Enter degree in F : ");
  scanf("%lf", &tempFarenheit);
  double result2;
  result2 = (tempFarenheit - 32)/1.8;
  printf("The temp in  °C is : %.2lf",result2);
  return 0;
}