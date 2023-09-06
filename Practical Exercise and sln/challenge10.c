//receives interger x and print x power2,power4,power6,power8
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    int x2,x4,x6,x8;
    printf("Enter interger x: ");
    scanf("%d",&x);
    x2 = x*x;
	x4 = x2 * x2;
	x6 = x4 * x2;
	x8 = x4 * x4;
    printf("x^2 = %d \nx^4 = %d \nx^6 = %d\n x^8 = %d\n",x2,x4,x6,x8);
    return 0;
}