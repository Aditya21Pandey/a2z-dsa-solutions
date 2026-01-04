#include<bits/stdc++.h>
using namespace std;

//selection sort
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int minidx=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[minidx]) minidx=j;
        }
        swap(arr[i],arr[minidx]);
    }
}


//bubble sort
void bubble_sort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                flag=true;
            }
        }
        if(!flag) break;
    }
}


//insertion sort
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // selection_sort(a,n);
    // bubble_sort(a,n);
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

