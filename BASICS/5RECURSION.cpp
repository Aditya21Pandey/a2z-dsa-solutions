//basic recursion problems

#include<bits/stdc++.h>
using namespace std;

//fn for addition
int add(int a,int b){
    return a+b;
}
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<add(a,b);
// }


//printing something n times,fuctional way
void print(int count){
    if(count==0) return;
    cout<<"Hello world"<<endl;
    print(count-1);
}
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


//printing something n times method 2 ,parameterised way
void print2(int count,int n){
    if(count==n) return ;
    cout<<"Hello World!!"<<endl;
    count++;
    print2(count,n);
}
// int main(){
//     int n;
//     cin>>n;
//     print2(0,n);
//     return 0;
// }



//printing name n times functional way
void printname(int n){
    if(n==0) return;  //base case
    cout<<"Aditya pandey"<<endl;
    printname(n-1);
}
// int main(){
//     int n;
//     cin>>n;
//     printname(n);
// }


//printing name n time ,parameterised way
void printname2(int i, int n ){
    if(i>n) return;
    cout<<"Aditya Pandey"<<endl;
    printname2(i+1,n);
}
// int main(){
//     int n;
//     cin>>n;
//     printname2(1,n);
//     return 0;
// }


//print linearly from 1 to n , functional way, with backtracking
void p1ton(int n){
    if(n==0) return ;
    //recursive call
    p1ton(n-1);
    cout<<n<<endl;
}
// int main(){
//     int a ;
//     cin>>a; 
//     p1ton(a);
// }


//print linearly from 1 to n , parameterised way ,without backtracking
void p1ton2(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    p1ton2(i+1,n);
}
// int main(){
//     int a;
//     cin>>a; 
//     p1ton2(1,a);
// }


//print n to 1 
void pnto1(int n){
    if(n==0) { return;}
    cout<<n<<endl;
    pnto1(n-1);
}
// int main(){
//     int a ;
//     cin>>a; 
//     pnto1(a);
// }


//sum of first n natural no functional way
int sumno(int n ){
    if(n==1) return 1;
    return n+sumno(n-1);
}
// int main(){
//     int a;
//     cin>>a;
//     cout<<sumno(a);
// }


//sum of first n natural no parameterised way
void  sumno2(int n , int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sumno2(n-1,sum+n);
}
// int main(){
//     int n ;
//     cin>>n;
//     sumno2(n,0);
//     return 0;
// }


//factorial of a number by fuctional way
//TC=O(N)
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
// int main(){
//     int a; 
//     cin>>a;
//     cout<<fact(a);
// }


//factorial of a number by parameterised way
void fact2(int n,int fac){
    if(n==0){
        cout<<fac;
        return;
    }
    fact2(n-1,fac*n);
}
// int main(){
//     int n;
//     cin>>n;
//     fact2(n,1);
//     return 0;
// }



//reverse a vector using loop and swapping
void vecrev(vector<int> &vec){
    //size of vector
    //m1  : int n = vec.size();
    int n=0;
    for(auto i:vec){
        n++;
    }
    //reversing
    int temp; 
    for(int i=0;i<n/2;i++){
        temp=vec[i];
        vec[i]=vec[n-i-1];
        vec[n-i-1]=temp;
    }
}
// int main(){
//     vector<int> vect={1,23,5,8,4,7,5};
//     vecrev(vect);
//     for(auto i:vect){
//         cout<<i<<" ";
//     }
//     return 0;
// }


//reverse an array using loop and swapping 
void arrayrev(int arr[], int n ){
    int i=0;
    while(i<n/2){
        std::swap(arr[i],arr[n-i-1]);
        i++;
    }
}
// int main(){
//     int array[]={1,2,3,4,5,6,7};
//     int size=sizeof(array)/sizeof(array[0]);
//     arrayrev(array,size);
//     for(auto i:array){
//         cout<<i<<" ";
//     }
//     return 0;
// }


//reverse of an array using recursion and swapping 
void arrrev(int i,int arr[],int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    arrrev(i+1,arr,n);
}
// int main(){
//     int n;
//     cout<<"enter size : ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     arrrev(0,array,n);
//     for(auto i:array){
//         cout<<i<<" ";
//     }
//     return 0;
// }


//to check an array is palindrome or not , two pointers methods
bool checkarraypalin(int arr[],int n){
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]) return false;
    }
    return true;
}
// int main(){
//     int n;
//     cout<<"enter size : ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     cout<<checkarraypalin(array,n);
//     return 0;
// }


//to check a string is palindrome or not
//m1 ---> by comparing with reversed string
void isPalindrome(string &str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (str == rev) cout<<"palindrome"<<endl;
    else cout<<"not palindrome"<<endl;
}
// int main() {
// 	isPalindrome("ABCDCBA");
//   	isPalindrome("ABCD");
//     return 0;
// }



//to check a string is palindrome or not
//m2 ---> Two Pointer Method
void isPalindrome2(string &str){
    int left = 0, right = str.size() - 1;
  	bool flag = true;
    while (left < right) {
        if (str[left] != str[right]) {
            flag = false;
            break;
        }
        left++;
        right--;
    }
  	if (flag) cout <<"YES palindrome"<<endl;	
    else cout <<"NOT palindrome"<<endl;
}
// int main() {
//   	string string;
//     cin>>string;
//     isPalindrome2(string);            
//     return 0;
// }


//to check a string is palindrome or not using recursion
bool strpalin(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return strpalin(i+1,s);
}
// int main(){
//     string str;
//     cin>>str;
//     cout<<strpalin(0,str);
//     return 0;
// }


//to return nth term of fibonacci series using multiple recursions
//0(0th term),1(1st term),1(2nd),2(3rd),3(4th),5(5th),8(6th),13,21,34...
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
// int main(){
//     int a;
//     cout<<"Enter nth term : ";
//     cin>>a;
//     cout<<fibo(a);
//     return 0;
// }

