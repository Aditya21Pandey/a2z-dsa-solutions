#include<stdio.h>
int main(){
    int age = 44;
    int *os = &age ;
    int _age = *os;
    int ok = 10;
    int *g= &ok ;
    int _ok = *g;
    printf("%d \n",age); //44
    printf("%d \n",os); //6422284
    printf("%d \n",_age); //44
    printf("%d \n",ok); //10
    printf("%d \n",g); //6422280
    printf("%d \n",_ok); //10
}
