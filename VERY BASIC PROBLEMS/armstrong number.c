#include<stdio.h>
//to check armstrong of a number or not
int main(){
    int a,sum=0,c;
    printf("enter the number :");
    scanf("%d",&a);
    c=a;
    while(a>0){
        sum+=(a%10)*(a%10)*(a%10);
        a/=10;
    }
    if(sum==c){
            printf("yes no is armstrong %d",c);

    }
    else{
        printf("not");
    }
    return 0;
}
