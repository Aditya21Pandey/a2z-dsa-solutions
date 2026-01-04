//basic maths
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

//count digits in a no
int countdig(int n){
    int a=0;
    while(n!=0){
        n/=10;
        a++;
    }
    return a;
}


//sum of all digits in a number
int sumdigits(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;    
    }
    return s;
}


//reverse a number
int reverseno(int m){
    int a=0;
    while(m!=0){
        a=(a*10)+m%10;
        m/=10;
    }
    return a;
}


//check palindrome
int palindromecheck(int m){
    int a=m;
    int b=0;
    while(a!=0){
        b=(b*10)+a%10;
        a/=10;
    }
    if(b==m) return true;
    else return false;
}


//gcd find using euclidean algo , method 1
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a==0) return b;
    return a;
}


//gcd of two numbers method 2   TC=O(min(n1,n2))
// int main(){
//     int a=1;
//     int n1,n2;
//     cin>>n1>>n2;
//     for(int i=1;i<=min(n1,n2);i++){
//         if( n1%i==0 && n2%i==0 ) a=i;
//     }
//     cout<<a;
//     return 0;
// }


// gcd of two numbers method 3  , TC=O(min(n1,n2))  , lesser runtime
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     for(int i=min(n1,n2);i>=1;i--){
//         if( n1%i==0 && n2%i==0 ) {
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }


//gcd of two numbers , swapping method
int gcd2(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<gcd2(n1,n2);
//     return 0;
// }


//gcd of two numbers using recursion
int gcd3(int a,int b){
    if(b==0) return a;
    return gcd3(b,a%b);
}
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     cout<<gcd3(n1,n2);
//     return 0;
// }



//LCM of two numbers using formula
// lcm = |a*b| / gcd(a,b)
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"lcm : "<<a*b/gcd(a,b);   // gcd fuction created above
// }


//LCM of two numbers using infinite loop
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=max(a,b);;i++){
//         if(i%a==0 && i%b==0){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }


//check armstrong number
int armstrongcheck(int m){
    //counting no of digits in no
    int a=0;
    int n=m;
    while(n!=0){
        a++;
        n/=10;
    }
    //armstrong calculate
    int b=m;
    int c=0;
    while(b!=0){
        int d=b%10;
        int s=1;
        for(int i=1;i<=a;i++) s*=d;
        c=c+s;
        b/=10;
    }
    if(c==m) return true;
    return false;
}


//print all divisors of a number method 1  ( TC = O(n) )
vector<int> div(int n){
    vector<int>  vecofdiv;
    for(int i=1;i<=n;i++){
        if(n%i==0) vecofdiv.push_back(i);
    }
    return vecofdiv;
}
// int main(){
//     int n;
//     cin>>n;
//     vector<int> divisors;
//     divisors = div(n);
//     for(auto i:divisors){
//         cout<<i<<endl;
//     }
//     return 0;
// }


//print all divisors of a number method 2 
// TC = O(rootn) + O(no of factors*log(no of factors))
vector<int> div2(int n){
    vector<int>  vecofdiv2;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            vecofdiv2.push_back(i);
            if((n/i)!=i) vecofdiv2.push_back(n/i);
        }
        sort(vecofdiv2.begin() , vecofdiv2.end());        
    }
    sort(vecofdiv2.begin() , vecofdiv2.end());
    return vecofdiv2;
}
// int main(){
//     int n;
//     cin>>n;
//     vector<int> divisors;
//     divisors = div2(n);
//     for(auto i:divisors){
//         cout<<i<<endl;
//     }
//     return 0;
// }


//check for prime no method 1
//TC=O(N)
int primecheck(int n){
    int flag=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) flag++;
    }
    if(flag==2) return true;  //there are two divisors of a prime no
    return false;
}
// int main(){
//     int a;
//     cin>>a;
//     cout<<primecheck(a);
//     return 0;
// }


//check for prime no method 2
//TC = O(rootN)
int primecheck2(int n){
    int flag=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            flag++;
            if((n/i)!=i) flag++;
        }
    }
    if(flag==2) return true;  //there are two divisors of a prime no
    return false;
}
// int main(){
//     int a;
//     cin>>a;
//     cout<<primecheck2(a);
// }
