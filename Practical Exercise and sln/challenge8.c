//receive num with 3 digits and prints the reversed
#include <stdio.h>
int main()
{
    printf("Enter a three digit num : ");
    int num,units,tens,hundreds;
    scanf("%d",&num);
    units = num % 10;
    tens = (num/10) % 10;
    hundreds = num / 100;
    printf("The reversed number is %d%d%d",units,tens,hundreds);
    return 0;
}