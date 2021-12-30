#include <stdio.h>

//Write a program where the user enters a non-zero integer and which then displays multiplication table for this number.

//Sample Run

//input: 5								
								
//5 * 0 = 0
//
//5 * 1 = 5
//
//5 * 2 = 10
//
//5 * 3 = 15
//
//5 * 4 = 20
//
//5 * 5 = 25
//
//5 * 6 = 30
//
//5 * 7 = 35
//
//5 * 8 = 40
//
//5 * 9 = 45
//
//5 * 10 = 50


int main(void){
    
    int a, i;
    scanf("%d", &a);
    
    while (a!=0){
        for(i=0;i<=10;i++){
            printf("%d * %d = ", a,i);
            printf("%d \n", a*i);
        }
        a=0;
    }
    
    return 0;
}
