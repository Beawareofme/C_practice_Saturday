//PRANSHUL ATRI CH.EN.U4CYS21057
#include<stdio.h>
int main(){
    int age_r,age_s,age_a;
    printf("Enter the age of the Ram: ");
    scanf("%d",&age_r);
    printf("\nEnter the age of the Shyam: ");
    scanf("%d",&age_s);
    printf("\nEnter the age of the Ajay: ");
    scanf("%d",&age_a);
    if(age_r < age_s && age_r < age_a){
        printf("\nRam is the youngest.");
    }
    else if(age_s < age_r && age_s < age_a){
        printf("\nShyam is the youngest.");
    }
    else if(age_a < age_r && age_a < age_s){
        printf("\nAjay is the youngest.");
    }
    else if(age_a==age_s && age_a < age_r){
        printf("\nBoth Ajay and Shyam are the youngest");
    }
    else if(age_a==age_r && age_a < age_s){
        printf("\nBoth Ajay and Ram are the youngest");
    }
    else if(age_r==age_s && age_s < age_a){
        printf("\nBoth Ram and Shyam are the youngest");
    } 
    else{
        printf("\nNo one is the youngest.\n");
    }       
}