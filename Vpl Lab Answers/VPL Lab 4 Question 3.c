#include <stdio.h>
#include <stdlib.h>

// Write a C program that, given the type of vehicle (c for car, b for bus, t for truck) and the hours a vehicle spent in the parking lot, calculate the parking charge based on the rates shown below:

// * Car 2 TL per hour

// * Bus 3 TL per hour 

// * Truck 4 TL per hour

int main(void) {
    char v;
    int h;
    int r;
    
    printf("Enter Vehicle Type:\n");
    scanf(" %c", &v);
    
    if (v == 'c'){
        r = 2;
        printf("Enter hours of the vehicle spent in the parking lot: \n");
        scanf("%d", &h);
        
        printf("%d", r*h);
    }
    else if (v == 'b'){
        r = 3;
        printf("Enter hours of the vehicle spent in the parking lot: \n");
        scanf("%d", &h);
        
        printf("%d", r*h);
    }
    else if (v == 't'){
        r = 4;
        printf("Enter hours of the vehicle spent in the parking lot: \n");
        scanf("%d", &h);
        
        printf("%d", r*h);
    }
}
