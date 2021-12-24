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

int leap(int year)
{
	return (year % 400 == 0) || ((year % 100 != 0) && (year % 4));
}

int
main(void)
{
	int given_year;
	printf("Enter Year: ");
	fflush(stdout);
	scanf("%d", &given_year);

	int days = 0;
	for (int year = 1; year < given_year ; year++)
		days += 365 + (leap(year) ? 1 : 0);

	printf("The day was %s\n", lookupTable[(days % 7)]);
}

