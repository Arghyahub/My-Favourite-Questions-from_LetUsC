#define _POSIX_C_SOURCE 200809L
#include <stdio.h>

const char *lookupTable[] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday",
};

int
main(void)
{
	int given_year;
	printf("Enter Year: ");
	fflush(stdout);	// Otherwise input may not appear before scanf() is called
	scanf("%d", &given_year);

	// Since we don't count the days of the given year in the total no. of days
	// Therefore, subtract one from the given year for calculating the no. of days below
	int years = given_year - 1;

	// Calculate no. of days
	int days = 365 * years
		+ years/4
		- years/100;

	printf("The day was %s\n", lookupTable[(days % 7)]);
}

