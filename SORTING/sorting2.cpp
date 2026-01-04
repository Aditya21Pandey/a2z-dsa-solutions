#include<bits/stdc++.h>
using namespace std;


//merge sort
void mergearrays(vector<int> &arr ,int low ,int mid, int high ){  //in sorted order
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void merge_sort(vector<int> &arr,int low,int high){
    if(low==high) return;
    int mid=(low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    mergearrays(arr,low,mid,high);
}
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     merge_sort(v,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }



//quick sort
int partition(vector<int> &arr,int low , int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(vector<int> &arr, int low , int high){
    if(low<high){
        int pIndex=partition(arr,low ,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr, pIndex+1, high);
    }
}
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     quick_sort(v,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


//recursive bubble sort

