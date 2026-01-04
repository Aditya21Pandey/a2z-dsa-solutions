#include <iostream>
using namespace std;


//solid star square 
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        //one line printed
        cout<<"\n";
    }
}


//star right angled triangle
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


//number right angled triangle 
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


//number right angled triangle
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


//star right angled triangle upside down
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}    


//number right angled triangle upside down
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}


//equilateral star triangle 
void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //spaces
        for(int l=0;l<n-i+1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}



//equilateral star triangle upside down
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k<2*n-(2*i+1);k++){     //formula 
            cout<<"*";
        }
        //spaces
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}


//pattern 9 is combination of pattern 7 and 8
void erect_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}
void inverted_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}


//pattern 10
void print10(int n){    
    for(int i =1 ; i<=2*n-1; i++){
        int stars =i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout <<endl;
    }    
}



//pattern 11
void print11(int n){
    for(int i=1;i<=n;i++){
        int val;
        for(int j=1;j<=i;j++){
            if(i%2==0 && j==1) val=0;
            else if(i%2!=0 && j==1) val=1;
            cout<<val;
            if(val==1) val=0;   //or (val = 1 - val;)    this will switch the value of val between 1 and 0
            else val=1;
        }
        cout<<endl;
    }
}


//pattern 12
void print12(int n){
    int a=2*n;
    for(int i=1; i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //spaces
        a=a-2;
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        //number
        for(int l=i;l>=1;l-- ){
            cout<<l;
        }
        cout<<endl;
    }    
}


//pattern 13
void print13(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}


//pattern 14
void print14(int n){
    //A=65
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
}


//pattern 15
void print15(int n){
    for(int i=n;i>=1;i--){
        int a=65;
        for(int j=i;j>=1;j--){
            cout<<char(a);
            a++;
        }
        cout<<endl;
    }
}


//pattern 16
void print16(int n){
    //A=65
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+64);
        }
        cout<<endl;
    }
}


//pattern 17
void print17(int n ){
    for(int i=1;i<=n;i++){   //outer loop --> row
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //alphabet
        char ch = 'A';
        for(int k=1 ;k<=2*i-1;k++){
            cout<<ch;
            if(k>(2*i-1)/2) ch--;
            else ch++;
        }
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }    
}


//pattern 18
void print18(int n){
    char a;
    for(int i=0;i<n;i++){
        a=char(64+n);
        a=a-i;
        for(int j=0;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;        
    }
}


//pattern 19
void print19(int n){
    int a = n;
    //1st outer loop
    for(int i=1;i<=n;i++){
        if(i!=1) a--;
        //stars upper
        for(int j=a;j>=1;j--){   
            cout<<"*";
        }
        //spaces upper
        for(int j=i*2-2;j>=1;j--){
            cout<<" ";
        }
        //stars upper
        for(int j=a;j>=1;j--){   
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd outer loop
    int b=n;
    for(int i=1;i<=n;i++){
        if(i!=1) b--;
        //lower stars
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        //spaces lower
        for(int j=b*2-2;j>=1;j--){
            cout<<" ";
        }
        //lower stars
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


//pattern 19b
void print19b(int N)
{
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
}


//pattern 20
void print20(int n){
    for(int i=1;i<=2*n-1;i++){
        //stars
        int stars = i; 
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=(2*n)-(2*stars);j>0;j--){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


//pattern 21
void print21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n ) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}



//pattern 22
void print22(int n ){
}


int main(){
    int t;   //no of testcases
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        print22(a); 
        cout<<endl; 
        return 0;    
    }
}



