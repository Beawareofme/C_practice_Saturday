#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c;
    float semi,area;
    printf("Enter the values of a :");
    scanf("%f",&a);
    printf("\nEnter the value of b :");
    scanf("%f",&b);
    printf("\nEnter the value of c :");
    scanf("%f",&c);
    semi = (a+b+c)/2;
    area = sqrt(semi*(semi-a)*(semi-b)*(semi-c));
    printf("The area of the triangle is : %f",area);
}

// Enter the values of a :3

// Enter the value of b :6

// Enter the value of c :7
// The area of the triangle is : 8.944272