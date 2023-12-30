#include<stdio.h>
int main(){
    float num;
    printf("Enter a number: (can be positive or negative)");
    scanf("%f",&num);
    if(num<0){
        num*(-1);
        printf("The absolute value of num is : %.2f",num);
    }
    else{
        printf("The absolute value of num is : %.2f",num);
    }
}