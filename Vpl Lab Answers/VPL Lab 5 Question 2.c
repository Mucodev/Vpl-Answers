#include <stdio.h>
#include <stdlib.h>

// Write a program to input a number and

//* write "odd" to screen if the number is positive and odd, 

//* write "even" to screen if the number is positive and even,

//* write "negative" to screen if the number is negative

//Use switch-case statements. 


int main(void) {
	
	int a, b = 1;
	printf("Enter a number:\n");
	scanf("%d", &a);
	
	
	
	if (a > 0 && a%2==0){
		b=0;
	}
	else if (a > 0 && a%2 == 1){
		b=1;
	}
	else if (a < 0 ) {
		b=2;
	}
	
	switch (b){
	    case 0:
	    	printf("even");
	    	break;
	    case 1:
	    	printf("odd");
	    	break;
	    case 2:
	    	printf("negative");
	    	break;
	    	
	}

	return 0;
}
