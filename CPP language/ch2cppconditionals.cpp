#include<iostream>
using namespace std;
/*
//odd even check
int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
*/
/*
//divisible by 5 or not
int main(){
    int a;
    cout<<"enter value of a :"; cin>>a;
    if(a%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    } 
}
*/
/*
// print absolute value (magnitude) of integer
int main(){
    int f;
    cout<<"enter value of integer :";
    cin>>f;
    if(f>=0){
        cout<<f;
    }
    else{
        cout<<-f;
    }
    return 0;
}
*/
/*
//profit or loss calculations
int main(){
    float cp,sp;
    cout<<"enter cost price :"; cin>>cp;
    cout<<"enter selling price :"; cin>>sp;
    if(cp<sp){
        cout<<"profit"<<endl<<"profit is : "<<sp-cp<<endl<<"profit percentage is :"<<((sp-cp)/cp)*100;
    }
    else if(cp>sp){
        cout<<"loss"<<endl<<"loss is :"<<cp-sp<<endl<<"loss percentage is :"<<((cp-sp)/cp)*100;

    }
    else{
        cout<<"no profit no loss";
    }
    return 0;
}
*/
/*
//perimeter and area of rectangle
int main(){
    int l,b,a,p;
    cout<<"enter length of rect : "; cin>>l;
    cout<<"enter breadth of rect : "; cin>>b;
    a=l*b; p=2*(l+b);
    cout<<"area is :"<<a<<endl<<"perimeter is : "<<p<<endl;
    if(a<p) cout<<"perimeter is greater";
    else if(a>p) cout<<"area is greater";
    else cout<<"both are equal";
}
*/
/*
//three digit no
int main(){
    int a;
    cout<<"enter a +ve no : ";
    cin>>a;
    if(a>99 and a<1000){ //(a>99 && a<1000)
        cout<<"3 digit no";
    }
    else{ 
        cout<<"not a 3 digit no";
    }
    return 0;
}
*/
/*
//divisible by both 5 and 3
int main(){
    int a;
    cout<<"enter a +ve no : ";
    cin>>a;
    if(a%5==0 and a%3==0){         //(a%5==0 && a%3==0) //(a%15==0)
        cout<<"divisible by 5 and 3";
    }
    else{ 
        cout<<"not divisible by 5 and 3 both";
    }
    return 0;
}
*/
/*
//divisible by 5 or 3
int main(){
    int a;
    cout<<"enter a +ve no : ";
    cin>>a;
    if(a%5==0 or a%3==0){         //(a%5==0 || a%3==0) 
        cout<<"divisible by 5 or 3";
    }
    else{ 
        cout<<"not divisible by 5 or 3 ";
    }
    return 0;
}
*/
/*
//valid triangle check
int main(){
    int a,b,c;
    cout<<"enter 1 side :"; cin>>a;
    cout<<"enter 2 side :"; cin>>b;
    cout<<"enter 3 side :"; cin>>c;
    if((a+b)>c and (c+a)>b && (b+c)>a){
        cout<<"Valid Triangle";      
    }
    else{
        cout<<"Not A Valid Triangle";
    }
    return 0;
}
*/
/*
//print least of 3 numbers
int main(){
    int a,b,c;
    cout<<"enter 1 number"; cin>>a;
    cout<<"enter 2 number"; cin>>b;
    cout<<"enter 3 number"; cin>>c;
    if(a<b && a<c){
        cout<<a<<" is least";
    }
    else if(b<a && b<c){
        cout<<b<<" is least";
    }
    else{
         cout<<c<<" is least";
    }
}
*/
/*
//impotant
//greatest of 3 numbers using nested if-else 
int main(){
    int a,b,c;
    cout<<"enter three numbers : "; cin>>a>>b>>c;
    //a>b and a>c -> a is greatest
    if(a>b){   //b can never be greatest 
        if(a>c){   //a>b ,a>c ---> a is greatest
            cout<<a<<" is greatest";
        }
        else{   // a>b , c>a -> c is greatest
            cout<<c<<" is greatest";
        }
    }
    else{  //b>a -> a can never be greatest
        if(b>c){  //b>a , b>c -> b is greatest
            cout<<b<<" is greatest";
        }
        else{  //b>a , c>b -> c is greatest
            cout<<c<<" is greatest";
        }
    }
}
*/
/*
//print grade of a student
int main(){
    int n;
    cout<<"enter percentage (0-100): ";
    cin>>n;
    if(n<=100 && n>=81){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}
*/
/*
//calculator using if-elseif
int main(){
    int a; cin>>a;
    char c; cin>>c;
    int b; cin>>b;
    // input like number1operatornumber2 continuously
    if(c=='+') cout<<a+b;
    else if(c=='-') cout<<a-b;
    else if(c=='*') cout<<a*b;
    else if(c=='/') cout<<a/b;
    else cout<<"enter valid operation";
}
*/
/*
//calculator using switch statement
int main(){
    int a; cin>>a; //number 1
    char c; cin>>c; //operator
    int b; cin>>b; //number 2
    switch(c){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Invalid Operation"
    }
    return 0;
}
*/









