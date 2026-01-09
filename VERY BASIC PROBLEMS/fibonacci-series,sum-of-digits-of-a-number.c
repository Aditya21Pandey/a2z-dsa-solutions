//sum of digits of a number
#include<stdio.h>
/*
int main(){
    int a,b =0;
    printf("enter the number : ");
    scanf("%d",&a);
    while(a!=0){
            b+=a%10;
            a/=10;
    }
    printf("sum of digits : %d",b);
    return 0;
}
*/

/*
int main(){
    int n,i=1,a=0,b=1,c;
    printf("enter limit of fibonacci series :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
        i++;

    }
    return 0;
}
*/
int main(){
    float c,s,p,l;
    float pp,lp;
    printf("enter the cost price :");scanf("%f",&c);
    printf("enter the selling price :");scanf("%f",&s);
    if(s>c){
        printf("profit\n");
        p=s-c;
        pp=(p/c)*100.0;
        printf("profit is : %f\n",p);
        printf("profitpercentage is : %f\n",pp);
    }
    else{
        printf("loss\n");
        l=c-s;
        lp=(l/c)*100.0;
        printf("loss is : %f\n",l);
        printf("losspercentage is : %f\n",lp);
    }
    return 0;
}
