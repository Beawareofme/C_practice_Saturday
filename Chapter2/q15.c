#include<stdio.h>
int main(){
    int sum;
    int notes = 0; 
    printf("Enter the sum: ");
    scanf("%d",&sum);
    int temp;
    temp = sum/100;
    notes = notes + temp;
    sum=sum-(temp*100);
    printf("\nHundreds:%d\n",temp);
    temp = sum/50;
    notes = notes + temp;
    sum = sum - (temp * 50);
    printf("Fifty's:%d\n",temp);
    temp = sum/10;
    notes = notes + temp;
    sum = sum - (temp * 10);
    printf("Ten's:%d\n",temp);
    temp = sum/5;
    notes = notes + temp;
    sum = sum - (temp * 5);
    printf("Five's:%d\n",temp);
    temp = sum/2;
    notes = notes + temp;
    sum = sum - (temp * 2);
    printf("Two's:%d\n",temp);
    temp = sum/1;
    notes = notes + temp;
    sum = sum - (temp * 1);
    printf("One's:%d\n",temp);
    printf("\nNumber of notes: %d\n",notes);

}