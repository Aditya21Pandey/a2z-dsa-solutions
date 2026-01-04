#include<iostream>
using namespace std;


//counting frequency of  element x  in  array[]
//high TC
//Brute force method
int freq(int x,int arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) cnt++;
    }
    return cnt;
}
// int main(){
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;
//     int array[n];
//     cout<<"enter elements of array :- "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     int b;
//     cout<<"enter element to calculate it's frequency in array : ";
//     cin>>b;
//     cout<<freq(b,array,n);
//     return 0;
// }


// counting frequency of elements in an array using hashing 
// int main(){
//     //size of array
//     int n;
//     cout<<"enter size of array :";
//     cin>>n;
//     //initialising array
//     int arr[n];
//     //input elements of array
//     cout<<"enter array elements :-";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 
//     //m->largest element present in array arr[]
//     int m;
//     cout<<"enter largest element in array: ";
//     cin>>m;
//     //initialising hash array
//     int hash[m+1]={0};
//     //prestoring , precomputing
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     //check frequency
//     int q;
//     cout<<"enter no of numbers to check their frequency : ";
//     cin>>q;
//     while(q!=0){
//         int number;
//         cout<<"enter no to check its frequency : ";
//         cin>>number;
//         cout<<hash[number]<<endl;
//         q--;
//     }
//     return 0;
// }


//counting frequency of a char in a string using brute force method 
//traversing each element of string to check 
int charfreq(char c,string &s){
    int n=s.length();
    int cnt=0;
    for(int i=0;s[i] != '\0';i++){
        if(c==s[i]) cnt++;
    } 
    return cnt;   
}
// int main(){
//     string str;
//     cout<<"enter string : ";
//     cin>>str;
//     char c;
//     cout<<"enter the character :";
//     cin>>c;
//     cout<<charfreq(c,str);
//     return 0;
// }


//character hashing using ASCII values
//only 256 characters are present , so arrays are suitable for char hashing 
// int main(){
//     string s ;
//     cin>>s;
//     int size=s.size();
//     //precompute
//     int hash[256]={0};
//     for(int i=0;i<size;i++) hash[s[i]]++;
//     int q;
//     cin>>q;
//     while(q!=0){
//         char ch;
//         cin>>ch;
//         cout<<hash[ch]<<endl;
//         q--;
//     }
// }


#include<map>
//number hashing using map
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     map<int , int> mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<mp[number]<<endl;    //map[key]=value;
//     }
//     //map stores in sorted(increasing) order
//     for(auto it:mp){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     return 0;
// }


//string hashing using map
// int main(){
//     string s ;
//     cin>>s;
//     int n=s.size();
//     map<char,int> hashmap;
//     for(int i=0;i<n;i++){    //(i=0;s[i]!='\0';i++)
//         hashmap[s[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q!=0){
//         char ch;
//         cin>>ch;
//         cout<<hashmap[ch]<<endl;;
//         q--;
//     }
//     return 0;
// }


#include<unordered_map>
//number hashing using unordered map
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     unordered_map<int , int> umap;  //
//     for(int i=0;i<n;i++){
//         umap[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<umap[number]<<endl;    //umap[key]=value;
//     }
//     //unordered_map stores in random order
//     for(auto it:umap){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     return 0;
// }



