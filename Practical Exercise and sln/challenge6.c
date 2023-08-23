/*Receive a float as input
print the decimal part*/
#include <stdio.h>
int main()
{
    float num;
    printf("Enter a floating point num");
    scanf("%f", &num);
    int intNum;
    intNum = (int)num;
    float decimalPart;
    decimalPart = num - intNum;
    printf("The decimal part i %f",decimalPart);
    return 0;
}