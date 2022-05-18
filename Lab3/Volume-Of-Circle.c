//ANUROJ BASKOTA!!!!!!
#include <stdio.h>
#include <math.h>
#define pi 3.14

void main() {
	int rad;
	float vol;
	
	printf("Enter radius of the circle: ");
	scanf("%d",&rad);
	
	vol = (4/3) * pi * rad*rad*rad;

	printf("The volume of circle is: %f\n", rad, vol);

}
