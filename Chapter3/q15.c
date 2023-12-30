//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
int main(){
    int angle1,angle2,angle3,total_sum;
    printf("Enter the value of first angle: (in degrees):");
    scanf("%d",&angle1);
    printf("Enter the value of second angle: (in degrees):");
    scanf("%d",&angle2);
    printf("Enter the value of third angle: (in degrees):");
    scanf("%d",&angle3);
    total_sum = angle1 + angle2 + angle3;
    if(total_sum==180){
        printf("It is a valide triangle");
    }
    else{
        printf("It's not a valid triangle");
    }
}