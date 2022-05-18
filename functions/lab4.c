#include <stdio.h>

void netSalary() {
	int salary;
	float vat, travelAllowance, commission, netsalary;

	printf("Enter salary: ");
	scanf("%d",&salary);

	vat = (13.0/100)*salary;
	travelAllowance = (10.0/100)*salary;
	commission = (12.0/100)*salary;

	printf("vat: %f\ntravel Allowance: %f\ncommission: %f\n", vat, travelAllowance, commission);

	netsalary = salary - vat + travelAllowance + commission;

	printf("Net Salary: %f\n", netsalary);
		
}

void ternary() {
	(2>3)? : printf("Usage of ternary Operator\n");
}

void toDays() {
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
#include <stdio.h>


void toYMD(){
    int totalDays, years, months, days;	

	printf("Enter total number of days: ");
	scanf("%d",&totalDays);

	years = totalDays / 365;
	months = (totalDays - (years * 365) )/30;
	days = totalDays - ((years * 365) + (months * 30));	

/*
	years = totalDays/ 365;

	months = years*30;

	days = totalDays / months;
*/
	printf("Number of years: %d\nmonths: %d\ndays: %d\n",years, months, days);
}

int main() {

    netSalary();
    ternary();
    toDays();
    toYMD();




    return 0;
}