#include<iostream>
using namespace std;


/*
//wap to count no of digits of a number
int main(){
    int a=0,c;
    cout<<"enter the number : ";
    cin>>c;
    while(c>0){
        a++;
        c=c/10;
    }
    cout<<"no of digits are : "<<a;
}
*/


/*
//wap to print sum of digits of a number
int main(){
    int s=0;
    int a;
    cout<<"enter the number : ";
    cin>>a;
    while(a>0){
        s+=(a%10);
        a/=10;
    }
    cout<<"sum of digits : "<<s;
    return 0;
}
*/


/*
//to print product of digits of a given number
int main(){
    int p=1;
    int n;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        p*=(n%10);
        n/=10;
    }
    cout<<"product of number : "<<p;
    return 0;
}
*/

/*
//to print sum of all even digits of a number
int main(){
    int s=0;
    int ld;
    int n;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        ld=n%10;
        n/=10;
        if(ld%2==0){
            s+=ld;
        }
    }
    cout<<"sum of all even digits : "<<s;
}
*/


/*
//to print reverse of a number without using arrays
int main(){
    int n,ld,r=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        ld=n%10;
        n/=10;
        r=(r*10)+ld;
    }
    cout<<"reverse of the number : "<<r;
    return 0;
}
*/

/*
//to print sum of first n natural numbers using for loop
int main(){
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    cout<<"sum is : "<<s; 
}
*/

/*
//to print sum of first n natural numbers using while loop
int main(){
    int n,s=0;
    cin>>n;
    int i=n;
    while(i>=1){
        s+=i;
        i--;
    }
    cout<<"sum is : "<<s; 
}
*/


/*
//factorial of a number n using for loop
int main(){
    int n,a=1;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        a*=i;
    }
    cout<<"factorial is : "<<a;
}
*/


/*
//factorial of a number n using while loop
int main(){
    int n,a=1;
    cout<<"enter the number : ";
    cin>>n;
    int i=n;
    while(i>=1){
        a*=i;
        i--;
    }
    cout<<"factorial is : "<<a;
}
*/


/*
//to print factorial of all first n natural numbers
int main(){
    int n,a=1;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        a*=i;
        cout<<"factorial of "<<i<<" ="<<a<<endl;
    }
    return 0;
}
*/


/*
//to print ascii values of all alphabets using for loop
int main(){
    for(char ch='A';ch<='Z';ch++){
        cout<<ch<<"=="<<int(ch)<<endl;
    }
    cout<<endl<<endl<<"\n";
    for(char ch='a';ch<='z';ch++){
        cout<<ch<<"=="<<int(ch)<<endl;
    }
}
*/



/*
//to print ascii values of all alphabets using while loop
int main(){
    char ch='A';
    char c='a';
    while(ch<='Z'){
        cout<<ch<<"=="<<int(ch)<<endl;
        ch++;
    }
    cout<<endl<<endl<<"\n";
    while(c<='z'){
        cout<<c<<"=="<<int(c)<<endl;
        c++;
    }
}
*/



//








