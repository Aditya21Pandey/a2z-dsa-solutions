#include<stdio.h>
int main(){
    int a=1,b=0,c=0,n,sum=0;
    printf("enter no of terms of series to print:");
    scanf("%d",&n);
    if(n==1){

        printf("0");
    }
    else if(n==2){
        printf("0\n");
        printf("1\n");
    }
    else{
        printf("0\n");
        for(int i=1;i<=(n-1);i++){
            printf("%d\n",a);
            b=c;
            c=a;
            a=a+b;
        }


    }


}





