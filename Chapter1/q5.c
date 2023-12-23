#include<stdio.h>

int main(){
    int basicsalary;
    printf("Enter the Basic Salary\n");
    scanf("%d",&basicsalary);
    float dearnessallowance,rentallowance,Grosssalary;
    dearnessallowance = 0.4*basicsalary;
    rentallowance = 0.2*basicsalary;
    Grosssalary=basicsalary+dearnessallowance+rentallowance;
    printf("The gross salary is : %f ",Grosssalary);
}