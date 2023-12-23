#include<stdio.h>
int main(){
    float science,maths,english,hindi,computers,totalsum,avgmarks,percentage;
    printf("Enter the marks in Science : \n");
    scanf("%f",&science);
    printf("Enter the marks in Maths : \n");
    scanf("%f",&maths);
    printf("Enter the marks in English : \n");
    scanf("%f",&english);
    printf("Enter the marks in Hindi : \n");
    scanf("%f",&hindi);
    printf("Enter the marks in Computers : \n");
    scanf("%f",&computers);
    totalsum = science+maths+english+hindi+computers;
    avgmarks = totalsum/5;
    printf("\nThe total sum of all subjects is %0.2f.",totalsum);
    printf("\n\nThe average mark obtained by the student is %0.2f.\n",avgmarks);
    percentage = (totalsum/500)*100;
    printf("So, the percentage obtained by the student is %0.2f percent.\n",percentage);
}

// Enter the marks in Science : 
// 78
// Enter the marks in Maths : 
// 99
// Enter the marks in English : 
// 67
// Enter the marks in Hindi : 
// 92
// Enter the marks in Computers : 
// 100

// The total sum of all subjects is 436.00.

// The average mark obtained by the student is 87.20.
// So, the percentage obtained by the student is 87.20 percent.