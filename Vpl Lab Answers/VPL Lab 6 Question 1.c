#include <stdio.h>

//Write a C program calculate the sum of even numbers from a to b (Both numbers included). a and b are inputs.
//Use a while loop to calculate the sum.


int main(void){
    int a,b;
    int sum = 0;
    
    scanf("%d %d", &a, &b);
    
    while (a <= b){
	  
        if (a % 2 == 0){
            sum +=a;
        }
        a++;
    }
    printf("%d", sum);
    return 0;
}
