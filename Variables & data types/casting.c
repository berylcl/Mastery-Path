#include <stdio.h>
int main()
{
  int num1 = 5,num2 = 2;
  int result;
  result = num1/(double)num2; //assuming num 2 is not zero
  printf("The result is: %d",result);
  return 0;
}