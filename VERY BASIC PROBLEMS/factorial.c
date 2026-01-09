//factorial of a number
#include<stdio.h>
int main(){
    int m;
    int f=1;
    printf("enter number :");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        f=f*i;

    }
    printf("factorial is : %d ",f);
    return 0;
}
