#include <stdio.h>
int main()
{
  //write a program that gets three (int) from the user
  //The program should calculate and print the EXACT average
  int grade1, grade2, grade3;
  printf("Enter the first grade :");
  scanf("%d",&grade1);
  printf("Enter the second grade :");
  scanf("%d",&grade2);
  printf("Enter the third grade : ");
  scanf("%d",&grade3);
  double average;
  average = ((double)grade1 + (double)grade2 + grade3)/3;
  printf("The average is %lf",average);
}