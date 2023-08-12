#include <stdio.h>
int main()
{
  int currentYear;
  int age;
  printf("Enter the year:");
  scanf("%d",&currentYear);
  printf("Enter your age : ");
  scanf("%d",&age);
  printf("You was born in :%d",currentYear - age);
  return 0;
}