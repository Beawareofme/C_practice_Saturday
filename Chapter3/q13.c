//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number:(5 digit num) ");
    scanf("%d",&num);
    int m= 10000,rem;
    int new_num = 0;
    int old_num=num;
    while(num!=0){
        rem = num%10;
        num=num/10;
        new_num=new_num+rem*m;
        m=m/10;
    }
    printf("new_sum %d",new_num);

    if(old_num==new_num){
        printf("\nBoth the numbers are same");
    }
    else{
        printf("\nBoth the numbers are different");
    }
}