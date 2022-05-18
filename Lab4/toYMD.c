//ANUROJ BASKOTA!!!!!!
#include <stdio.h>


void main() {
	int totalDays, years, months, days;	

	printf("Enter total number of days: ");
	scanf("%d",&totalDays);

	years = totalDays / 365;
	months = (totalDays - (years * 365) )/30;
	days = totalDays - ((years * 365) + (months * 30));	

	printf("Number of years: %d\nmonths: %d\ndays: %d\n",years, months, days);
}
