/*Practicing format specifiers*/
#include <stdio.h>
int main()
{
  printf("We have %d coins in the bank\n",100);
  printf("We have %f coins in the bank\n",125.7);
  printf("Year : %d\n",2023);
  printf("You're average grade is %f\n",95.13);
  printf("num 1 = %d, num 2 = %d, total = %d \n",4,56, 4+56);
  printf("num 1 = %f, num 2 = %f, sum = %.2f\n",5.3,6.9,5.3+6.9);
  printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
  printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
  printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
  return 0;
}