//ANUROJ BASKOTA!!!!!!
#include <stdio.h>


/*
calculate net salary of a person 
	10% travel allowance
	12% commission
	13% tax
*/

void main() {
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
