#include<iostream>
using namespace std;


/*
//print n to 1 using recursion
void print(int n){
    if(n==0) return;          // n=0 is our base case
    cout<<n<<endl;          //work
    print(n-1);           //call
}
int main(){
    int a;
    cin>>a;
    print(a);
    return 0;
}
*/



/*
//print 1 to n using extra parameter 
void print(int x,int c){
    if(x>c) return;
    cout<<x<<endl;
    print(x+1,c);
}

int main(){
    int a;
    cout<<"enter n : "; cin>>a;
    print(1,a);
    return 0;
}
*/


/*
//print 1 to n without using extra parameter  (n to 1 vaale mein //work and //call ko upar niche kr do)
void print(int n){
    if(n==0) return;          // n=0 is base case
    print(n-1);              //call
    cout<<n<<endl;          //work
    
}
int main(){
    int a;
    cin>>a;
    print(a);
    return 0;
}
*/


// NOT DONE YET
// //print sum from 1 to n , parameterised
// int print(int n,int a){
//     if(n==0) return 0;          // n=0 is base case
//     print(n-1,a);              //call
//     a+=n;          //work
//     cout<<a;
// }
// int main(){
//     int a;
//     cin>>a;
//     print(a,0);
//     return 0;
// }



/*
//sum from 1 to n , return type
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}

int main(){
    int a;
    cout<<"Enter n : ";
    cin>>a;
    cout<<sum(a);
}
*/


/*
//calculate factorial of n using recursion
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int a;
    cout<<"Enter n : ";
    cin>>a;
    cout<<fact(a);
}
*/


/*
//power fuction using recursion
int power(int n,int m){
    if(m==0) return 1;
    return n*power(n,m-1);
}

int main(){
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter power : ";
    cin>>b;
    cout<<power(a,b);
}
*/


/*
//calculate nth term of fibonacci series using recursion
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int a;
    cout<<"Enter term : ";
    cin>>a;
    cout<<fibo(a);
}
*/

