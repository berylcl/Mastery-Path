#include <stdio.h>
int main()
{
  double height,width;
  printf("Enter rectangle height:");
  scanf("%lf",&height);
  printf("Enter width:");
  scanf("%lf",&width);
  printf("The area is %lf",height * width);
  return 0;
}