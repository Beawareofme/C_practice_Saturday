//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
int main() {
    int year;
    printf("Enter the year: (enter last 2 digits)");
    scanf("%d", &year);
    int sum = 0;
    for (int i =2; i<=year;i++){
        if(i%4==0){
            sum+=2;
        }
        else{
            sum+=1;
        }
        }
        sum%=7;
        switch(sum){
            case 0:
                printf("Monday");
                break;
            case 1:
                printf("Tuesday");
                break;
            case 2:
                printf("Wednesday");
                break;
            case 3:
                printf("Thursday");
                break;
            case 4:
                printf("Friday");
                break;
            case 5:
                printf("Saturday");
                break;
            case 6:
                printf("Sunday");
                break;
                
        }
    }