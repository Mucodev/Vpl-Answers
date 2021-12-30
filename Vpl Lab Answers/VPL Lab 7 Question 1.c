#include <stdio.h>

//Write a C program to print odd numbers between 10 and 20 by using for ( ) loop.

int main(void){
    
    int a;
    
    for(a=10;a<=20;a++){
        if(a%2 == 1){
            printf("%d ", a);
        }
    }
    
    return 0;
}
