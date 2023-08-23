//takes a three digit num as input and prints the sum
#include <stdio.h>

int main()
{
    int num, digit1, digit2, digit3, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract individual digits
    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    // Calculate the sum of digits
    sum = digit1 + digit2 + digit3;

    printf("The sum of digits is: %d\n", sum);

    return 0;
}
