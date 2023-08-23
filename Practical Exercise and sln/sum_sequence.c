//write a program that calculates the sum of a sequence
#include <stdio.h>
int main()
{
    int a1,an,n;
    printf("Enter the first value of the arithmetic sequence(a1)");
    scanf("%d",&a1);
    printf("Enter the nth value of the sequence(an)");
    scanf("%d",&an);
    printf("Enter the number of value in the sequence(n)");
    scanf("%d",&n);
    printf("The sum of the sequence is %d", (a1+an)* n/2);
    return 0;
}