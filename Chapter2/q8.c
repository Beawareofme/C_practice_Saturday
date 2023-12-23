#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,rem,m=10000;
    printf("Enter a 5 digit number: ");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        num = num/10;
        sum = sum + rem*m;
        m=m/10;
    }
    printf("\nThe sum of digits in the entered number is %d.",sum);
}


// Enter a 5 digit number: 36475

// The sum of digits in the entered number is 57463.