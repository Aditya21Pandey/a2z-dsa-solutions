#include<iostream>
using namespace std;
//lec 3 arrays

/*
//1.arrays output input
int main(){
    int n;
    cout<<"Enter array size : "; cin>>n;
    int a[n] ;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter index : "<<i<<" : "; cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<"\t";
    }
}
*/

/*
//2.sum of array's elements
int main(){
    int n;
    cout<<"Enter array size : "; cin>>n;
    int a[n] ;
    int s=0;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter index : "<<i<<" : "; cin>>a[i];
        s+=a[i];
    }
    cout<<s;
}
*/


/*
//check element present in array or not
int main(){
    int n,b;
    cout<<"Enter array size : "; cin>>n;
    int a[n] ;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter index : "<<i<<" : "; cin>>a[i];
    }
    cout<<"Enter element to check : "; cin>>b;
    for(int i=0;i<=n-1;i++){
        if(a[i]==b){
            cout<<"present";
            break;
        }      
        else if(a[i]==a[n-1]){     //last element reached without finding requuired  element
            cout<<"not found";
        } 
    }
    return 0;
}
*/


/*
//check if an array is sorted int increasing  order or not 
 int main(){
    int n;
    cout<<"Enter array size : "; cin>>n;
    int a[n] ;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter index : "<<i<<" : "; cin>>a[i];
    }
    int f=0;
    for(int i=0;i<=n-1;i++){
        if(i!=n-1){
            if(a[i]<=a[i+1]) f++;
        }
    }
    if(f==n-1){
        cout<<"sorted";
    }
    else cout<<"not sorted";
 }
*/


/*
//to count frequency of an element in an array
int main(){
    int n,b;
    cout<<"Enter array size : "; cin>>n;
    int a[n] ;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter index : "<<i<<" : "; cin>>a[i];
    }
    cout<<"Enter element to check its frequency : "; cin>>b;
    int f=0;
    for(int i=0;i<=n-1;i++){
        if(a[i]==b){
            f++;
        }
    }
    cout<<"frequency of "<<b<<" in array :"<<f;
    return 0;
}
*/

//calculate min and max of an array approach 1
int main()
