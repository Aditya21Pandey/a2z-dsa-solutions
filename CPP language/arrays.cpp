#include<iostream>
using namespace std;


/*
//basic syntax of arrays
int main(){
    //5 student's marks 
    int marks[5];  //declaration
    marks[0]=6;   //set
    marks[1]=2;
    marks[2]=8;
    marks[3]=5;
    marks[4]=0;
    //individual elements printing , method 1
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    //using for loop , method 2
    for(int i=0;i<=4;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}
*/


/*
//input of array elements by user
int main(){
    int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<endl;
    }
}
*/



/*
//input and accesing each element of array using for loop
int main(){
    int arr[3];    //declaration 
    for(int i=0;i<=2;i++){         //input
        cin>>arr[i];
    }for(int i=0;i<=2;i++){     //output
        cout<<arr[i]<<endl;
    }
}
*/


/*
//print double of array elements
int main(){
    int arr[3];    //declaration 
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=2;i++){         //input
        cin>>arr[i];
    }for(int i=0;i<=2;i++){     //output
        cout<<arr[i]*2<<endl;
    }
}
*/


/*
//updation of array element
int main(){
    int arr[3];    //declaration 
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=2;i++){         //input
        cin>>arr[i];
    }
    for(int i=0;i<=2;i++){     //output
        cout<<arr[i]<<endl;
    }
    arr[0]=2000;    //updation
    arr[2]=1000;    //updation
    for(int i=0;i<=2;i++){     //output after updation
        cout<<arr[i]<<endl;
    }
}
*/


/*
//declaration + initialisation
int main(){
    int arr[6] = {1,8,3,4,6,2};      //int arr[] = {1,8,3,4,6,2};  also true only for declaration + initialisation
}
*/


/*
//printing reverse of array , taking no of elements in array and also input elements by user
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    for(int j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
}
*/


/*
//passing array to function (pass by reference)
void change(int a[]){
    a[0]=10;
}
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
*/


/*
//sum of all elements of array
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
*/


/*
//product of all elements in a array
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int pro=1;
    for(int i=0;i<=n-1;i++){
        pro*=arr[i];
    }
    cout<<pro;
}
*/



/*
//max value from array
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];             //int max= INT32_MIN;                //imp
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}
*/


/*
//minimum value from array
int main(){
    int n;
    cout<<"enter no of elements in array : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min=arr[0];         //int min = INT32_MAX;          //imp
    for(int i=0;i<=n-1;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min;
}
*/



/*
//size of operator for arrays 
int main(){
    int arr[]={1,2,3,1,3,3};
    cout<<sizeof(arr)<<" bytes";    //4*6(bytes)
}
*/

/*
//INT_MAX and INT_MIN values
int main(){
    cout<<INT32_MAX<<endl;
    cout<<INT32_MIN;
}
*/



/*
//array containing squares of all natural no till n
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++){
        ar[i-1]=i*i;
    }
    for(int j=0;j<=n-1;j++){
        cout<<ar[j]<<" ";
    }
}
*/



/*
//change --> odd index-->multiply by 2 , even index -->increase by 10  (method 1)
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ar[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>ar[i];
    }
    //odd index change 
    for(int i=1;i<=n-1;i+=2){
        ar[i]=2*ar[i];
    }
    //even index change
    for(int j=0;j<=n-1;j+=2){
        ar[j]=ar[j]+10;
    }
    for(int i=0;i<=n-1;i++){
        cout<<ar[i]<<" ";
    }
}
*/


/*
//change --> odd index-->multiply by 2 , even index -->increase by 10  (method 2)
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ar[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>ar[i];
    }
    for(int j=0;j<=n-1;j++){
        if(j%2==0) ar[j]+=10;
        else ar[j]*=2;
    }
    for(int i=0;i<=n-1;i++){
        cout<<ar[i]<<" ";
    }
}
*/


/*
//no of elements in array greater than a no x
int main(){
    int n;
    cout<<"enter no of elements in array(n) : ";
    cin>>n;
    int x;
    cout<<"Enter x : "; cin>>x;
    int ar[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>ar[i];
    }
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(x<ar[i]) count++;
    }
    cout<<count;
}
*/


/*
//difference between sum of elements at odd and even
int main(){
    int n;
    cout<<"enter no of elements in array(n) : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sodd=0,seven=0;
    for(int i=0;i<=n-1;i++){
        if(i%2==0) seven+=arr[i];
        else sodd+=arr[i];
    }
    cout<<seven-sodd;
}
*/


/*
//second largest element from the array
int main(){
    int n;
    cout<<"enter no of elements in array(n) : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mx=INT32_MIN;
    for(int i=0;i<=n-1;i++){
        mx=max(mx,arr[i]);
    }
    int smx=INT32_MIN;
    cout<<"Max value is : "<<mx<<endl;
    for(int j=0;j<=n-1;j++){
        if(arr[j]==mx) continue;
        else smx=max(smx,arr[j]);
    }
    cout<<"second largest element is : "<<smx;
}
*/


/*
//second smallest element from the array
int main(){
    int n;
    cout<<"enter no of elements in array(n) : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mn=INT32_MAX;
    for(int i=0;i<=n-1;i++){
        mn=min(mn,arr[i]);
    }
    int smn=INT32_MAX;
    cout<<"smallest element is : "<<mn<<endl;
    for(int j=0;j<=n-1;j++){
        if(arr[j]==mn) continue;
        else smn=min(smn,arr[j]);
    }
    cout<<"second smallest element is : "<<smn;
}
*/


/*
//copy one array into another in reverse order 
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<=4;i++){
        b[i]=a[n-i-1];
        cout<<b[i]<<", ";
    }
}
*/


/*
//reverse an array without using another array
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/4;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<", ";
    }  
}
*/



/*
//check if array is palindrome or not
int main(){
    int n;
    cout<<"enter no of elements in array(n) : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int k=0;k<=n-1;k++){
        cin>>arr[k];
    }
    int i=0;
    int j=n-1;
    int a=0;
    while(i<j){
        if(arr[i]==arr[j]) a++;
        i++;
        j--;
    }
    if(a==n/2) cout<<"Palindrome";
    else cout<<"not palindrome";
}
*/






