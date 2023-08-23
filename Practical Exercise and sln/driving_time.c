#include <stdio.h>

int main()
{
	int distance = 300; // KM
	int speed = 80; // KM/H
	int hours = distance / speed; // H// 300/80 --> 3 Hours 240 KM
	float speedInMinutes = speed / 60.0; //
	float remainingMinutes = (distance % speed) / speedInMinutes; // [Min] Units
	printf("The time from A to B will take %d hours and %.2f minutes\n", hours, remainingMinutes);
	return 0;
}