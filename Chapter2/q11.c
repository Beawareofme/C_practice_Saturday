#include<stdio.h>
#include<math.h>

int main(){
    float l1,l2,g1,g2;
    double distance;
    printf("Enter the coordinate l1: ");
    scanf("%f",&l1);
    printf("\nEnter the coordinate l2: ");
    scanf("%f",&l2);
    printf("\nEnter the coordinate g1: ");
    scanf("%f",&g1);
    printf("\nEnter the coordinate g2: ");
    scanf("%f",&g2);
    distance = 3963*acos((sin(l1)*sin(l2))+((cos(l1)*cos(l2))*cos(g2-g1)));
    printf("The distance in nautical miles is : %lf",distance);
}

// Enter the coordinate l1: 23

// Enter the coordinate l2: 34

// Enter the coordinate g1: 11

// Enter the coordinate g2: 24
// The distance in nautical miles is : 6373.403444