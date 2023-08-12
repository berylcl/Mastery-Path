#include <stdio.h>
int main()
{
  int height;
  int width;
  printf("Enter rectangle height:");
  scanf("%d",&height);
  printf("Enter width:");
  scanf("%d",&width);
  printf("The area is %d",height * width);
  return 0;
}