#include<stdio.h>
int size(int n,int a,int b);
int main(){
    int a,b;
    a = 1189;
    b = 841;
    printf("The dimensions of A0 paper is : %dmm X %dmm\n",a,b);
    int c = size(1,a,b);
}
int size(int n,int a,int b){
    while(n<9){
        if(a>b){
            a=a/2;
            printf("The Dimension of A%d paper is : %dmm X %dmm\n",n,a,b);
        }
        else{
            b=b/2;
            printf("The Dimension of A%d paper is : %dmm X %dmm\n",n,a,b);
        }
        n = n+1;
    }
}

// The dimensions of A0 paper is : 1189mm X 841mm
// The Dimension of A1 paper is : 594mm X 841mm
// The Dimension of A2 paper is : 594mm X 420mm
// The Dimension of A3 paper is : 297mm X 420mm
// The Dimension of A4 paper is : 297mm X 210mm
// The Dimension of A5 paper is : 148mm X 210mm
// The Dimension of A6 paper is : 148mm X 105mm
// The Dimension of A7 paper is : 74mm X 105mm
// The Dimension of A8 paper is : 74mm X 52mm
