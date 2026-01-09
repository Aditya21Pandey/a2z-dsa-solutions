#include<stdio.h>
int main(){
    int a,rev=0,b;
    printf("enter number to check: ");
    scanf("%d",&a);
    b=a;
    while(a>0){
        rev=(rev*10)+a%10;
        a/=10;
    }
    if(b==rev){
        printf("palindrome no");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
}
