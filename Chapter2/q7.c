#include<stdio.h>
int main(){
    int num,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        num = num/10;
        sum = sum + rem;
    }
    printf("\nThe sum of digits in the entered number is %d.",sum);
}

// Enter a number: 54321

// The sum of digits in the entered number is 15.