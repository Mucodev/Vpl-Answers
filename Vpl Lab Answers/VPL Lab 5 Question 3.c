#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a C program that the user inputs a character. If the character is equal to 's' or 'S', your program calculates and prints the volume of sphere (4 over 3 pr cubed).  
//Use M_PI from math.h for straight pi.   If the character is equal to 'c' or 'C', your program calculates and prints the volume of cube: (a cubed). 
//The radius value of the sphere and the side value of the cube should be input by the user (Use switch-case statements). 
//Use %.2f float precision.

int main(void) {
    M_PI;
    
    double r;
    char t;
    printf("Enter s or c for the calculation (for volume of a sphere 's' / for volume of a cube 'c'):\n");
    scanf(" %c", &t);
    
    printf("Enter a Radius value:\n");
    scanf("%lf", &r);
    
    if (t == 's' || t == 'S'){
        printf("%.2f", ((4*M_PI)*r*r*r)/3);
    }
    else if (t == 'c' || t == 'C'){
        printf("%.2f", r*r*r);
    }
    else {
        printf("Enter s(S) or c(C) Pls.");
    }
    
    
    return 0;
}

/* //With Switch-Case
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	
	M_PI;
	
	double r;
	char type;
	
	printf("Enter s or c for the calculation (for volume of a sphere 's' / for volume of a cube 'c'):\n");
	scanf("%c", &type);
	
	printf("Enter side value: \n");
	scanf("%lf", &r);
			
	
	switch(type){
		case 's':
		case 'S':
			printf("%.2f", ((4*M_PI)*r*r*r)/3);
			break;
			
		case 'c':
		case 'C':
			printf("%.2f", r*r*r);
			break;
		default:
		    printf("Enter s(S) or c(C) Pls.");
	}
	


	return 0;
}*/
