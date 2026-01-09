#include<iostream>
using namespace std;


/*
//print no from 1 to 100
int main(){
    for(int i=1;i<=100;i++){
        cout<<i<<endl;
    }
    return 0;
}
*/


/*
//all even no and odd no between a range 
int main(){
    int m,n;
    cout<<"enter starting and ending ranges : "; cin>>m>>n;
    cout<<"even :"<<endl;
    for(int i=m;i<=n;i++){
        if(i%2==0) cout<<i<<"\t";
    }
    cout<<endl;
    cout<<"odd :"<<endl;
    for(int i=m;i<=n;i++){
        if(i%2!=0) cout<<i<<"\t";
    }
}
*/


/*
//table of a number input by user
int main(){
    int n;
    cout<<"enter the number : "; cin>>n;
    for(int i=1;i<=10;i++) cout<<n<<"*"<<i<<"="<<n*i<<endl;
    return 0;
}
*/


/*
//display AP 1,3,5,7... upto n terms
//method 1
int main(){
    int n;
    cout<<"enter nth term :"; cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<" ";
    }
}
*/


/*
//display AP 4,7,10,13... upto n terms
//method 1
int main(){
    int n;
    cout<<"enter nth term :"; cin>>n;
    for(int i=4;i<=3*n+1;i+=3){
        cout<<i<<" ";
    }
}
*/

/*
//display AP 4,7,10,13... upto n terms
//method 2
int main(){
    int n;
    cout<<"enter nth term :"; cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
}
*/


/*
//display GP 1,2,4,8,... upto n terms 
int main(){
    int n;
    cout<<"enter nth term :"; cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<"\t";
        a*=2;
    }
}
*/


/*
//display GP 3,12,48,... upto n terms 
int main(){
    int n;
    cout<<"enter nth term :"; cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<"\t";
        a*=4;
    }
}
*/

/*
//print factors of a number including itself
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
*/


/*
//print factors of a number excluding itself
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
*/

/*
//print highest factor of a number excluding itself
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    int a=1;
    for(int i=1;i<n;i++){
        if(n%i==0){
            a=i;
        }
    }
    cout<<"highest factor : "<<a;
    return 0;
}
*/

/*
//print highest factor of a number excluding itself
//method 2
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    int a=1;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            a=i;
        }
    }
    cout<<"highest factor : "<<a;
    return 0;
}
*/

/*
//print highest factor of a number excluding itself
//method 3 , using break statement , fastest method
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i;
            break;
        }
    }
    return 0;
}
*/

/*
//check if a no is composite or prime
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    int a=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is composite no";
            break;            
        }
        else{
            a++;           
        }
    }
    if(a==(n/2-1)){
        cout<<n<<" is prime no";

    }

    return 0;
}
*/

/*
//check if a no is composite or prime ,method 2, using boolean data type
int main(){
    int n;
    cout<<"enter number :"; cin>>n;
    bool flag=true; //true means prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false; //false means composite
            break;
        }
    }
    if(n==1) cout<<"Neither Prime Nor Composite";
    else if(flag==true) cout<<"prime no";
    else cout<<"composite no";
    return 0;
}
*/


/*
//to print odd numbers from m  to n range using continue statement
int main(){
    int n,m;
    cout<<"enter starting range :"; cin>>m;
    cout<<"enter ending range :"; cin>>n;
    for(int i=m;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
}
*/

/*
//printing 200 to 2 in gap of two numbers using while loop
int main(){
    int i=200;
    while(i>=1){
        cout<<i<<endl;
        i-=2;
    }
    return 0;
}
*/


/*
//for loop looking like while loop
int main(){
    int i=1;
    for(;i<=10;){    //Only Condition Inside () Parenthesis
        cout<<i<<" ";
        i++;
    }
    return 0;
}
*/

/*
//Do While loop min 1 baar run krega hi , bhle hi codition phle baari mein hi false ho rhi ho
int main(){  //phle work krega tab condition check krega
    int i=11;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);
    return 0;
}
*/




























 

