#include<stdio.h>
#include<math.h>

int main(){
    float temp,velocity_w;
    double wcf;
    printf("Enter the temperature in degree Celsius: ");
    scanf("%f",&temp);
    printf("Enter the wind velocity; ");
    scanf("%f",&velocity_w);
    wcf = (35.74+(0.6125*temp)+(((0.4275*temp)-35.75)*(pow(velocity_w,0.16))));
    printf("\nThe Wind Chill Factor is %lf\n",wcf);
}

// Enter the temperature in degree Celsius: 32.5
// Enter the wind velocity; 345

// The Wind Chill Factor is -0.024453