#include<stdio.h>
#include<math.h>

int main(){
    float x,y,r,q;
    printf("Enter the x coordiante : ");
    scanf("%f",&x);
    printf("\nEnter the y coordinate : ");
    scanf("%f",&y);

    r = sqrt((pow(x,2))+(pow(y,2)));
    q = atan(y/x);
    printf("the  polar co-ordinates are (%f,%f) .",r,q);
}

// Enter the x coordiante : 45

// Enter the y coordinate : 23
// the  polar co-ordinates are (50.537113,0.472497) .