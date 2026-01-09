//find area of a traingle using three sides
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("enter first side : ");
    scanf("%f",&a);
    printf("enter second side : ");
    scanf("%f",&b);
    printf("enter third side : ");
    scanf("%f",&c);
    float s=(a+b+c)/2;
    float e=s*(s-a)*(s-b)*(s-c);
    float h=pow(e,0.5);
    printf("area of triangle : %f \n",h);
    return 0;
}
