#include<stdio.h>
int main(){
    float length,breadth,radius;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    printf("\nThe area of the rectangle is %f\n",length*breadth);
    printf("\nThe perimeter of the rectangle is %f\n",2*(length+breadth));
    printf("\nEnter the radius of the circle: ");
    scanf("%f",&radius);
    printf("\nThe area of the circle is %.2f\n",3.14159*radius*radius);
    printf("\nThe Circumference of the circle is %.2f\n",3.14159*2*radius);   
    return 0;
}

// Enter the length of the rectangle: 34.6
// Enter the breadth of the rectangle: 56.7

// The area of the rectangle is 1961.819940

// The perimeter of the rectangle is 182.599998

// Enter the radius of the circle: 34.98

// The area of the circle is 3844.05

// The Circumference of the circle is 219.79