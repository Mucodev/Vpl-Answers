#include <stdio.h>

//Write a program where the user enters 10 floating point numbers into an array and it shows the numbers that are greater than the average.

int main(){
    
    float arr[10];
    float num;
    float sum;
    float avg;
    int i;
    
    for (i=0;i<10;i++){
        scanf("%f", &num);
        arr[i] = num;
        sum+=num;
    }
    avg = sum/10;
    
    for (i=0;i<10;i++){
        if (arr[i] > avg){
            printf("%.2f\n", arr[i]);
        }
    }
    return 0;
}

