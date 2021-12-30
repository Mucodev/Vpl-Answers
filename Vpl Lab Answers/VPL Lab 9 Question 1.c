#include <stdio.h>
#define NUMBERS 6

//Write a program that takes 6 integers from user and store them in an array. Calculate the Sum, Average, Minimum number, Maximum number and print them on the screen

int main(){
	int arr[NUMBERS];
    int i;
    int max=0;
    int min=51432;
	int sum=0;
	int temp;
	int flag;
    float avg=0;
    
	for(i=0;i<NUMBERS;i++){
    	scanf("%d", &arr[i]);
    	sum += arr[i];
    }
    
    do{
    	flag=0;
    	for (i = 0; i < NUMBERS - 1; i++) {
	    	if (arr[i] > arr[i + 1]) {
				flag = 1;
				// Swapping operation
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}while(flag==1);
	
	avg = sum / 6.0;
    min = arr[0];
    max = arr[5];
    
    printf("%d ", sum);
    printf("%f ", avg);
    printf("%d ", min);
    printf("%d ", max);
    
}
