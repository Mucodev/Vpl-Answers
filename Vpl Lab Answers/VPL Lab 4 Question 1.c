#include <stdio.h>
#include <stdlib.h>

//Write a program to take an integer from user. If it is even number, print “number is even” to the screen. If it is not, print “number is not even “ to the screen.

int main(void) {
	int a;
	printf("Enter an integer :\n");
	scanf("%d", &a);
	
	if (a%2 == 0){
	    printf("number is even");
	}
	else{
	    printf("number is not even");
	}
	return 0;
	
}
