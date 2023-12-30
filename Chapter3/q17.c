//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter the Length of Rectangle: ");
    scanf("%d",&length);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%d",&breadth);
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    if(area>perimeter){
        printf("The are of the rectangle is greater than the perimeter of the rectangle.");
    }
    else{
        printf("The are of the rectangle is less than the perimeter of the rectangle.");
    }
}