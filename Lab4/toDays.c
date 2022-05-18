//ANUROJ BASKOTA!!!!!!

#include <stdio.h>

void main() {
	int year, month, days, totalDays;

	printf("Enter number of years: ");
	scanf("%d",&year);

	printf("Enter number of months: ");
	scanf("%d",&month);

	printf("Enter number of days: ");
	scanf("%d",&days);

	totalDays = year * 365 + month * 30 + days;

	printf("Total number of days in %d years %d months and %d days: %d\n",year, month, days, totalDays);

}
