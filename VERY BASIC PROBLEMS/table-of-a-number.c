//TABLE OF A NUMBER
#include <stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d",n);
        printf("*");
        printf("%d",i);
        printf("=");
        printf("%d \n",n*i);
    }
    return 0;
}
