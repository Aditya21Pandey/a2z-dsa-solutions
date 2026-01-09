#include<iostream>
using namespace std;


/*
//solid star rectangle
int main(){
    int m,n;
    cout<<"enter no of rows :"; cin>>m;
    cout<<"enter no of columns :"; cin>>n;
    for(int i=1;i<=m ;i++){       //rows=m
        for(int j=1;j<=n;j++){    //column=n
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/

/*
//solid star square
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m ;i++){
        for(int j=1;j<=m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/

/*
//number square 1st
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/

/*
//number square 2nd
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//alphabet square
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){
        for(char j=1;j<=m;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//alphabet square 2nd
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){
        for(char j=1;j<=m;j++){
            cout<<char(i+64)<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//alphabet square of smaller case alphabets
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){
        for(char j=1;j<=m;j++){
            cout<<char(j+96)<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//star triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=i;j++){    //columns
            cout<<"* ";
        }
        cout<<endl;

    }
}
*/

/*
//number triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=i;j++){    //columns
            cout<<j<<" ";
        }
        cout<<endl;

    }
}
*/


/*
//alphabet triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=i;j++){    //columns
            cout<<char(j+64)<<" ";
        }
        cout<<endl;

    }
}
*/



/*
//number triangle  2nd
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=i;j++){    //columns
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
*/




/*
//mixed alphabet and number triangle    (Good question)
int main(){
    int m;
    cout<<"enter the no of rows : "; cin>>m;
    for(int i=1;i<=m;i++){                //rows
        for(int j=1;j<=i;j++){            //columns  
            if(i%2==0){
                cout<<char(j+64)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
//horizontally flipped star triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=m;i>=1;i--){        //rows
        for(int j=1;j<=i;j++){    //columns
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/


/*
//horizontally flipped star triangle method 2
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=m-i+1;j++){    //columns
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/


/*
//horizontally flipped number triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=m-i+1;j++){    //columns
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
*/


/*
//horizonntally flipped number triangle different
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=m-i+1;j++){    //columns
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
*/


/*
//number triangle different
int main(){
    int n;
    cout<<"enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>n-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
//horizontally flipped alphabet triangle
int main(){
    int m;
    cout<<"enter no of rows or column :"; cin>>m;
    for(int i=1;i<=m;i++){        //rows
        for(int j=1;j<=m-i+1;j++){    //columns
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}
*/

/*
//odd number triangle method 1 , 2 , 3
int main(){
    

    int n;
    cout<<"enter no of rows :"; cin>>n;
    
    //best
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j*2-1<<" ";
        }
        cout<<endl;

    }




    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    


    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;

    }    
}
*/


/*
//Floyd's Triangle
int main(){
    int n;
    cout<<"enter no of rows :"; cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
*/


/*
//0 and 1 triangle form 1
int main(){
    int n;
    cout<<"enter no of rows : "; cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            if(a==1) a=0;
            else a=1;
        }
        cout<<endl;
    }
}
*/



/*
//0 and 1 triangle form 2
int main(){
    int n;
    cout<<"enter no of rows : "; cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0 && j==1){
                a=0;
            }
            else if(i%2!=0 && j==1){
                a=1;
            }
            cout<<a<<" ";
            if(a==1) a=0;
            else a=1;           
        }
        cout<<endl;
    }
}
*/


/*
//0 and 1 triangle form 2 method 2
int main(){
    int n;
    cout<<"enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           if((i+j)%2==0) cout<<1<<" ";
           else cout<<0<<" ";        
        }
        cout<<endl;
    }
}
*/

/*
//star plus
int main(){
    int n;
    cout<<"enter rows (odd only) : ";
    cin>>n;
    int a=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==a || j==a) cout<<"* ";
            else cout<<"  "; 
        }
        cout<<endl;
    }
}
*/


/*
//star plus
int main(){
    int n;
    cout<<"enter rows (odd only) : ";
    cin>>n;
    int a=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==a || j==a) cout<<"* ";
            else cout<<"# "; 
        }
        cout<<endl;
    }
}
*/

/*
//hollow star rectangle
int main(){
    int m,n;
    cout<<"enter rows : "; cin>>m;
    cout<<"enter columns : "; cin>>n;
    for(int i=1;i<=m;i++){              //rows
        for(int j=1;j<=n;j++){          //columns
            if(i==1 || j==1 || i==m || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
//solid hash - star rectangle
int main(){
    int m,n;
    cout<<"enter rows : "; cin>>m;
    cout<<"enter columns : "; cin>>n;
    for(int i=1;i<=m;i++){              //rows
        for(int j=1;j<=n;j++){          //columns
            if(i==1 || j==1 || i==m || j==n) cout<<"* ";
            else cout<<"# ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
//star cross
int main(){
    int n;
    cout<<"enter the no of rows(odd only) : "; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i || j==n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
//star triangle vertically reverse form 1
int main(){
    int n;
    cout<<"Enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=n-i;j++){    //spaces
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++){    //stars
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/

/*
//star triangle vertically reverse form 2
int main(){
    int n;
    cout<<"Enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=n-i+1;j++){    //spaces
            cout<<"# ";
            
        }
        for(int k=1;k<=i;k++){     //stars
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/


/*
//number triangle vertically reverse
int main(){
    int n;
    cout<<"Enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=n-i;j++){    //spaces
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++){    //numbers
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
*/




/*
//alphabet triangle vertically reverse
int main(){
    int n;
    cout<<"Enter no of rows : "; cin>>n;
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=n-i;j++){    //spaces
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++){    //alphabets
            cout<<char(k+64)<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//star rhombus solid
int main(){
    int n;
    cout<<"Enter No Of Rows : "; cin>>n;
    for(int i=1;i<=n;i++){          //rows
        for(int j=1;j<=n-i;j++){     //spaces
            cout<<"  ";
        }
        for(int  k=1;k<=n;k++){        //star square
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/



/*
//hollow star rhombus
int main(){
    int n;
    cout<<"Enter No Of Rows : "; cin>>n;
    for(int i=1;i<=n;i++){          //rows
        for(int j=1;j<=n-i;j++){     //spaces
            cout<<"  ";
        }
        for(int  k=1;k<=n;k++){        //star square
            if(i==1 || i==n || k==1 || k==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";

            }
        }
        cout<<endl;
    }
}
*/


/*
//solid proper triangle
int main(){
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){    //rows
        for(int j=1;j<=n-i+1 ; j++){  //spaces 
            cout<<" ";
        }
        for(int j=1;j<=i;j++){   //stars
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
//hollow proper star triangle 
int main(){
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){    //rows
        for(int j=1;j<=n-i+1 ; j++){  //spaces 
            cout<<" ";
        }
        for(int j=1;j<=i;j++){   //stars
            if(i==1 || i==n || j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;

}
*/

