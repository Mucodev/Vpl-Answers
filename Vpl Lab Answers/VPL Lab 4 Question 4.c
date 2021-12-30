#include <stdio.h>
#include <stdlib.h>

// Write a C program that calculates the total cost of the projects which are completed by the engineer according to project types which are Small Projects, Medium Projects and Large Projects. 
// At first, the user will choose the project type. Then, s/he will enter the number of projects from selected project type. 
// At the end of the program, the cost will be calculated according to below table and printed to the screen.

int main(void) {
    char type;
    int num;
    
    printf("Enter Project Type(s, m, l):\n");
    scanf(" %c", &type);
    
    if (type == 's'){
        printf("Enter the Number of Projects:\n");
        scanf("%d", &num);
        if (num < 3){
            printf("Price: %d", num*1500);
        }
        else if (3 <=num && num <=5){
            printf("Price: %d", num*1000);
        }
        else{
            printf("Price: %d", num*750);
        }
    }
    
    else if (type == 'm'){
        printf("Enter the Number of Projects:\n");
        scanf("%d", &num);
        if (num < 3){
            printf("Price: %d", num*2500);
        }
        else if (3 <=num && num <=5){
            printf("Price: %d", num*2000);
        }
        else{
            printf("Price: %d", num*1750);
        }
    }
    
    else if (type == 'l'){
        printf("Enter the Number of Projects:\n");
        scanf("%d", &num);
        if (num < 3){
            printf("Price: %d", num*4500);
        }
        else if (3 <= num && num <= 5){
            printf("Price: %d", num*4000);
        }
        else if (num > 5){
            printf("Price: %d", num*3500);
        }
    }
}
