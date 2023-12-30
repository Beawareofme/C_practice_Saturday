#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("\n%d is even.", num);
}
else{
    printf("\n%d is odd.", num);
    }
}


// Enter a number: 34

// 34 is even.