//2a...find area  of circle and circumference of circle taking a constant value pi = 3.14
#include <stdio.h>
int main(){
    float radius;
    printf("enter radius: ");
    scanf("%f",&radius);
    #define pi 3.14
    printf("area of circle: %f \n",pi*radius*radius);
    printf("circumference of circle: %f \n",2*pi*radius);
    return 0;
}
