#include<iostream>
using namespace std;

/*
//initialising and printing
int main(){
    int a[2][3];
    a[0][0]=6;
    a[0][1]=1;
    a[0][2]=2;
    a[1][0]=4;
    a[1][1]=3;
    a[1][2]=5;
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<3;j++){   //columns
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/




/*
//initialising and printing using for loops
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<3;j++){   //columns
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<3;j++){   //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/



/*
//Transpose of a matrix
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<3;j++){   //columns
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is"<<endl;
    for(int i=0;i<2;i++){  //rows
        for(int j=0;j<3;j++){   //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix"<<endl;
    for(int j=0;j<3;j++){  //columns 
        for(int i=0;i<2;i++){   //rows
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/



/*
//to store roll number and marks of 4 students
int main(){
    int rm[2][4];
    for(int i=0;i<=3;i++){
        cout<<"details of "<<i+1<<"student"<<endl;
        for(int j=0;j<=1;j++){
            cin>>rm[i][j];
        }
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            cout<<rm[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//store 10 in each cell of array of [5][5] dimensions
int main(){
    int arr[5][5];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/



/*
//add two matrices
int main(){
    int r,c;
    cout<<"Enter rows : "; cin>>r;
    cout<<"Enter columns : "; cin>>c;
    int a[r][c];
    int b[r][c];
    int d[r][c];
    cout<<"enter 1 matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"enter 2 matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"after addition"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

/*
//find max element from a 2d matrix
int main(){
    int r,c;
    cout<<"Enter rows : "; cin>>r;
    cout<<"Enter columns : "; cin>>c;
    int a[r][c];
    cout<<"enter matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>a[i][j];
        }
    }
    int mx=a[0][0];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            mx=max(mx,a[i][j]);
        }
    }
    cout<<"max element is :"<<mx;
}
*/



/*
//find min element from a 2d matrix
int main(){
    int r,c;
    cout<<"Enter rows : "; cin>>r;
    cout<<"Enter columns : "; cin>>c;
    int a[r][c];
    cout<<"enter matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>a[i][j];
        }
    }
    int mn=a[0][0];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            mn=min(mn,a[i][j]);
        }
    }
    cout<<"smallest element is :"<<mn;
}
*/



/*
//find sum of all elements in a 2d matrix
int main(){
    int r,c;
    cout<<"Enter rows : "; cin>>r;
    cout<<"Enter columns : "; cin>>c;
    int a[r][c];
    cout<<"enter matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            sum+=a[i][j];
        }
    }
    cout<<"sum of all elements is :"<<sum;
}
*/


/*
int main(){
    int r,c;
    cout<<"Enter rows : "; cin>>r;
    cout<<"Enter columns : "; cin>>c;
    int a[r][c];
    cout<<"enter matrix elements"<<endl;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>a[i][j];
        }
    }
    int pro=1;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            pro*=a[i][j];
        }
    }
    cout<<"product of all elements is :"<<pro;
}
*/




/*
//sum of elements of rectangle of dimensions (l1,r1) to (l2,r2) in a matrix of dimensions m*n
int main(){
    int m,n;
    cout<<"enter no of rows : ";
    cin>>m;
    cout<<"enter no of col : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements of matrix : ";
    for(int i=0;i<=m-1;i++){    //rows
        for(int j=0;j<=n-1;j++){   //col
            cout<<"Enter Element "<<i<<","<<j<<" : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    int l1,r1,l2,r2;
    cout<<"Enter l1 and r1 : "; cin>>l1>>r1;
    cout<<"Enter l2 and r2 : "; cin>>l2>>r2;
    for(int i=l1;i<=l2;i++){       //rows
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum is : "<<sum;
}
*/





