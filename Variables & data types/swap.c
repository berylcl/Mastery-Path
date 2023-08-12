#include <stdio.h>
int main()
{
  int a = 10;
  int b = 20;
  //swap without third variable
  a = a + b; //30
  b = a - b; //10
  a = a - b;
  printf("Values after swapping a : %d, b : %d", a,b);
  return 0;
}