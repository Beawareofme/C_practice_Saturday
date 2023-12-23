#include<stdio.h>
int main(){
    float temp;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&temp);
    //Converting to Celsius
    temp = (temp - 32) * 5/9;
    printf("\nTemperature in Celsius is %0.1f\n",temp);
}

// Enter temperature in Fahrenheit: 98

// Temperature in Celsius is 36.7