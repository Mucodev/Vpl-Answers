#include <stdio.h>

//Write a program that reads five integers and displays them in the reverse of the order in which they were read.
//If the input is  "12 10 8 2 5", then the output should be "5 2 8 10 12".

int main(){
    
    int num;
    int arr[5] = {};
    int i;
    for (i=4; i>=0;i--){
        scanf("%d", &num);
        arr[i] = num;
    }
    for (i = 0;i<5;i++){
        printf("%d ", arr[i],i);
    }
    
    
}
