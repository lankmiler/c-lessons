#include <stdio.h>

int main()
{
	int number = 1329;

	int years;
	int weeks;
	int days;

	if(number%365 > 0) {
		years = number / 365;
		number -= (years * 365);
	}

	weeks = (number / 7);

	if(weeks > 0) {
		number -= weeks * 7;
	}

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", number);

    return 0;
}