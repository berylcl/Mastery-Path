//receives salary per hours and total hours worked in a month as input and calc salary
#include <stdio.h>
int main()
{
    float salary,hours;
    printf("Enter the salary(per hours)");
    scanf("%f",&salary);
    printf("Enter the total hours worked (in a month)");
    scanf("%f",&hours);
    printf("The employee salary this month is %f",salary*hours);
    return 0;
}