#include <stdio.h>


// Write a program to read a positive integer and find its factorial.

int main() {
    int a;
    int fakt=1;
    scanf("%d",&a);
    
    for(a!=0;a>0;a--){
        fakt*=a;
    }
    printf("%d",fakt);
    return 0;
}
