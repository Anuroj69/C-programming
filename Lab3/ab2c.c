//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {
	int a,b,c;
	double prod;

	printf("Enter \"a\" \"b\" \"c\": ");
	scanf("%d%d%d",&a,&b,&c);
	
	prod = (a * b * b) / c;
	printf("ab^2/c = %lf\n", prod);	

}
