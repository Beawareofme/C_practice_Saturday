#include<stdio.h>
int main(){
    int C,D,temp;
    C = 10;
    D = 23;
    printf("Valor de C: %d\n",C);
    printf("Valor de D: %d\n",D);
    temp = C;
    C = D;
    D = temp;
    printf("Valoarea lui C după schimbare: %d\n",C);
    printf("Valoarea lui D după schimbare: %d\n",D);
}

// Valor de C: 10
// Valor de D: 23
// Valoarea lui C dup─â schimbare: 23
// Valoarea lui D dup─â schimbare: 10