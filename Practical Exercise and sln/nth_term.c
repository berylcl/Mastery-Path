//calculate nth term of an arithmetic sequence
//calculate nth term of an arithmetic sequence
#include <stdio.h>
int main()
{
    float a1,d;
    int n;
    printf("Enter the first value of the arithmetic sequence(a1)");
    scanf("%f",&a1);
    printf("Enter the difference(d)");
    scanf("%f",&d);
    printf("Enter the number of elememts(n)");
    scanf("%d",&n);
    printf("The nth term of the sequence is %f",a1 + (n-1) * d);
    return 0;
}