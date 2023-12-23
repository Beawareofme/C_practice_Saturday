#include<stdio.h>
#include<math.h>

int main(){
    int angle;
    printf("Enter the value of angle: ");
    scanf("%d", &angle);
    angle = (angle+90)%360;
    printf("Sin value of this angle is: %f\n",sin(angle));
    printf("Cos value of this angle is: %f\n",cos(angle));
    printf("tan value of this angle is: %f\n",tan(angle));
    printf("Cot value of this angle is: %f\n",(1/tan(angle)));
    printf("Sec value of this angle is: %f\n",(1/cos(angle)));
    printf("Cosec value of this angle is: %f\n",(1/sin(angle)));
}

// Enter the value of angle: 45
// Sin value of this angle is: 0.088369
// Cos value of this angle is: -0.996088
// tan value of this angle is: -0.088716
// Cot value of this angle is: -11.271955
// Sec value of this angle is: -1.003928
// Cosec value of this angle is: 11.316226