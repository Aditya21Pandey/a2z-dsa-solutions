#include<stdio.h>
int main(){
    int a;
    printf("enter size of square matrix : ");
    scanf("%d",&a);
    int mat1 [a][a];
    int mat2 [a][a];
    int ans [a][a];
    int  n;
    printf("Enter Elements Of 1st Matrix :-\n");
    for(int i=0;i<=a-1;i++){
            for(int j=0;j<=a-1;j++){
                printf("enter element %d , %d : ",i,j);
                scanf("%d",&mat1[i][j]);
            }
    }
    printf("Enter Elements Of 2nd Matrix :-\n");
    for(int k=0;k<=a-1;k++){
            for(int l=0;l<=a-1;l++){
                printf("enter element %d , %d : ",k,l);
                scanf("%d",&mat2[k][l]);
            }
    }
    printf("\n");
    printf("1st Matrix : \n");
    for(int i=0;i<=a-1;i++){
            for(int j=0;j<=a-1;j++){
                printf("%d ",mat1[i][j]);
            }
            printf("\n");
    }
    printf("\n");
    printf("2nd Matrix : \n");
    for(int i=0;i<=a-1;i++){
            for(int j=0;j<=a-1;j++){
                printf("%d ",mat2[i][j]);
            }
            printf("\n");
    }
    printf("\n");
    printf("Enter choices : 1)addition 2)subtraction 3)upper and lower triangle 4)transpose 5)product 6)exit -->");
    scanf("%d",&n);
    printf("\n");
    switch(n){
        case 1:
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                    ans[i][j]=mat1[i][j]+mat2[i][j];
                    printf("%d ",ans[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                    ans[i][j]=mat1[i][j]-mat2[i][j];
                    printf("%d ",ans[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("matrix 1st : \n");
            printf("UPPER TRIANGLE MATRIX \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        if(i<=j){
                            printf("%d ",mat1[i][j]);
                        }
                        else{
                            printf("0 ");
                        }
                }
                printf("\n");
            }
            printf("LOWER TRIANGLE MATRIX \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        if(i>=j){
                            printf("%d ",mat1[i][j]);
                        }
                        else{
                             printf("0 ");
                        }
                }
                printf("\n");
            }
            printf("\n"); printf("\n");
            printf("matrix 2nd : \n");
            printf("UPPER TRIANGLE MATRIX \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        if(i<=j){
                            printf("%d ",mat2[i][j]);
                        }
                        else{
                            printf("0 ");
                        }
                }
                printf("\n");
            }
            printf("LOWER TRIANGLE MATRIX \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        if(i>=j){
                            printf("%d ",mat2[i][j]);
                        }
                        else{
                            printf("0 ");
                        }
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Transpose of matrix 1st : \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        printf("%d ",mat1[j][i]);
                }
                printf("\n");
            }
            printf("\n");
            printf("Transpose of matrix 2nd : \n");
            for(int i=0;i<=a-1;i++){
                for(int j=0;j<=a-1;j++){
                        printf("%d ",mat2[j][i]);
                }
                printf("\n");
            }
            break;
        case 5:
            for(int i=0;i<=a-1;i++){
                    for(int j=0;j<=a-1;j++){
                            ans[i][j]=0;
                            for(int k=0;k<=a-1;k++){
                                    ans[i][j]+=mat1[i][k]*mat2[k][j];
                            }
                            printf("%d",ans[i][j]);
                    }
                    printf("\n");
            }
            break;
        default:
            break;
        }
        return 0;
}
