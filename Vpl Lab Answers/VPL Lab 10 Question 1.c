#include <stdio.h>

//Write a program that takes three inputs from user, and finds their minimum between them by defining a function.

int arr[3];
int i=0;

int min();

int main(){
	for (i=0;i<3;i++){
        scanf("%d", &arr[i]);
    }
    min();
    printf("%d", arr[0]);
    
    return 0;
}

int min(){
    int flag=1;
    int temp;

    do{
        flag=0;
        for (i=0; i<2; i++){
        	if (arr[i] > arr[i+1]){
        	flag=1;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            }
        }
    }while (flag==1);
    
    return 0;
}
