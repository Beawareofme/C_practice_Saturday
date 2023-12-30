#include<stdio.h>
int main(){
    float costprice,sellprice;
    float loss,profit;
    printf("Enter the Cost Price of Good: ");
    scanf("%f",&costprice);
    printf("Enter the Selling Price of Good: ");
    scanf("%f",&sellprice);
    if(sellprice-costprice<0){
        loss = ((costprice-sellprice)/costprice)*100;
        printf("\nThe salesman have incured a loss of %.1f percent : ",loss);
    }
    else if(sellprice-costprice>0){
        profit = ((sellprice-costprice)/costprice)*100;
        printf("\nThe salesman have made a profit of %.1f percent : ",profit);
    }
    else{
        printf("\nCost price and selling price are equal.");
    }
}

// Enter the Cost Price of Good: 1000
// Enter the Selling Price of Good: 345

// The salesman have incured a loss of 65.5 percent : 