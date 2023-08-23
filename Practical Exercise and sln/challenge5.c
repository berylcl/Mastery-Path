#include <stdio.h>
/*convert given seconds to
total hours
total minutes
remaining seconds*/

int main()
{
    int seconds;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    int hours, minutes, remainingSeconds;
    hours = seconds / 3600;  // 1 hour = 3600 seconds
    seconds %= 3600;          // Calculate remaining seconds after hours
    
    minutes = seconds / 60;  // 1 minute = 60 seconds
    remainingSeconds = seconds % 60;  // Calculate remaining seconds after minutes
    
    printf("The hours is %d, minutes is %d, and seconds is %d\n", hours, minutes, remainingSeconds);
    return 0;
}
