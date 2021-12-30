#include <stdio.h>

// Write a C program that checks the action and prints the message according to below table. 
// Note: use if /else-if statements. Assume that user inputs the age of the person.

int main(){
    
    int a;
    printf("Please enter your age: %d\n");
    scanf("%d", &a);
    
    if (a < 18){
        printf("child");
    }
    else if (18 <= a && a <= 30){
        printf("young");
    }
    else{
        printf("mature");
    }
    return 0;
}
