//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the x cordinate of 1st point");
    scanf("%d",&x1);
    printf("Enter the y cordinate of 1st point");
    scanf("%d",&y1);
    printf("Enter the x cordinate of 2nd point");
    scanf("%d",&x2);
    printf("Enter the y cordinate of 2nd point");
    scanf("%d",&y2);
    printf("Enter the x cordinate of 2nd point");
    scanf("%d",&x3);
    printf("Enter the y cordinate of 2nd point");
    scanf("%d",&y3);    
    int m1,m2;
    if(x1==x2){
        if(x2==x3){
            printf("The points lie on the same line");
        }
        else{
            printf("The points don't lie on the same plane");
        }    
    }
    else if(x2==x3){
        if(x1==x2){
            printf("The points lie on the same line");
        }
        else{
            printf("The points don't lie on the same plane");
        }
    }
    else{
        m1=x2-x1/y2-y1;
        m2=x3-x2/y3-y2;
        if(m1==m2){
            printf("They lie on the same plane");
        }
        else{
            printf("They don't lie on the same plane");
        }
    }
}