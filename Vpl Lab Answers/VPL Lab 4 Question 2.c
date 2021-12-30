#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Write a program to input radius of a circle and a letter (character). If the letter is 'A' or 'a', program will display area of the circle, if it is 'C' or 'c' it will display circumference of it. 
// Note: use if statements. Radius input should be of type integer. Get pi from math.h. i.e. M_PI.

int main(void) {
	M_PI;
	int r;
	char slc;
	
	
	printf("Enter an integer:");
	scanf("%d", &r);

	printf("Enter A or C:");
	scanf(" %c", &slc);
	
	if (slc == 'A' || slc == 'a'){
		printf("%.2f", M_PI*r*r);
	}
	else if (slc =='C' || slc == 'c'){
	    printf("%.2f", 2.0f*M_PI*r);
	}
	return 0;
}
