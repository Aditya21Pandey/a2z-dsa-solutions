#include<stdio.h>
//print prime no between a given range
int main(){
    int a,b;
    int x,i;
    printf("enter starting and ending numbers of range :");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
            for(x=2;x<i;x++){
                if(i%x==0){
                break;
                }
            }
    if(i==x){
        printf("%d\n",i);
    }
    }
    return 0;


}




