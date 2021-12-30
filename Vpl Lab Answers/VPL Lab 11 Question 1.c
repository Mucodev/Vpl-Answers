#include <stdio.h>

//Array size and array numbers are input. You should output the maximum occurring number. 

int main(){
    int i;
    int n;
    int count=0;
    int flag=1;
    int temp;
    int temp_2 = -1;
    int number;
    scanf("%d", &n);
    int num[n];
    
    for (i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    
    do{
        flag=0;
        for (i=0;i<n-1;i++){
            if (num[i] > num[i+1]){
                flag = 1;
                temp = num[i];
                num[i]=num[i+1];
                num[i+1]=temp;
            }
        }
    }while(flag==1);
    
    for (i=0;i<n;i++){
        if(num[i] == num[i+1]){
            count++;
            }
        if (count > 0){
            if (count > temp_2){
                temp_2 = count;
                number = num[i];
            }
        if (num[i]>num[i+1]){
            count=0;
        }
        }
    }
    printf("%d", number);
    
}
