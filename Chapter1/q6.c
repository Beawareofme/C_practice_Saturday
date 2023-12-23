#include<stdio.h>

int main(){
    float distancekm;
    printf("Enter the distance between two cities(in Kms)\n");
    scanf("%f",&distancekm);
    float dm,di,df,dc;
    dm = distancekm*1000;
    dc = distancekm*100000;
    df = distancekm*3280.84;
    di = distancekm*39370.1;
    printf("The distance in meters is : %f\n",dm);
    printf("The distance in inch is : %f\n",di);
    printf("The distance in feet is : %f\n",df);
    printf("The distance in centimeters is : %f\n",dc);
}

// 340 distance in kms
// The distance in meters is : 340000.000000
// The distance in inch is : 13385834.000000
// The distance in feet is : 1115485.625000
// The distance in centimeters is : 34000000.000000