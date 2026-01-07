//easy questions on arrays

#include<bits/stdc++.h>
using namespace std;

//1.largest element in an array


//brute force approach,using sorting
//TC=O(NlogN),SC=O(1),Quick sort
// int main(){
//     vector<int> arr={1,100,366,48,55,4};
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     cout<<arr[n-1];
//     return 0;
// }


//optimal approach
//Traversing each element using loop
//TC=O(N)
int largestelement(vector<int> &arr){
    int n=arr.size();
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}
// int main(){
//     vector<int> vec={1,20,37,44,5,6,71,70};
//     int max=largestelement(vec);
//     cout<<max;
//     return 0;
// }


//using inbuilt function in STL
//O(n) Time and O(1) Space
int largest(vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}
// int main() {
//     vector<int> arr = {11,2,3,4,500,6,100};
//     cout << largest(arr);
//     return 0;
// }


//2.second largest element in an array


//brute force method
//using sorting, TC=O(NlogN+N)
// int main(){
//     vector<int> arr={-1,2,100,10,-100,50};
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     int largest=arr[n-1];
//     for(int i=n-2;i>=0;i++){
//         if(arr[i] != largest ){ 
//             cout<<arr[i];
//             break;
//         }
//     }
// }


//better approach
//using two loops, one for finding largest , other for secondlargest
//TC=O(2N)=O(N)
// int main(){
//     vector<int> arr={10,20,-2,-20,100};
//     int n=arr.size();
//     int largest = arr[0];
//     for(int i=0;i<n ; i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     int secondlargest=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>secondlargest && arr[i] != largest){
//             secondlargest=arr[i];
//         }
//     }
//     cout<<secondlargest;
// }


//optimised approach 
//TC=O(N)
int secondlargest(vector<int> arr){
    int largest=arr[0];
    int slargest=INT_MIN;
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
// int main(){
//     vector<int> arr={10,20,-100,20,200,2000,100,-100,-100,1000};
//     int sl=secondlargest(arr);
//     cout<<sl;
//     return 0;
// }


//to find the second smallest element in the array , optimised approach
int secondsmallest(vector<int> arr){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
// int main(){
//     vector<int> arr={10,20,-100,20,200,2000,100,-100,-100,1000};
//     int ss=secondsmallest(arr);
//     cout<<ss;
//     return 0;
// }


//3.check if the array is sorted
//TC=O(N)
bool isSorted(vector<int>& arr) {
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        return false; 
    }
    return true;
}
// int main(){
//     vector<int> arr={1,1,2,3,4,4,5};
//     if(isSorted(arr))  cout<<"true";
//     else cout<<"false";
//     return 0;
// }


//4.remove duplicates from the sorted array

//brute force approach->using set
//TC=O(NlogN+N) , SC=O(N)
int removeDuplicates(vector<int>& nums) {
    set<int> st;
    int n=nums.size();
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    int index=0;
    for(auto it:st){
        nums[index]=it;
        index++;
    }
    return index;  
}
// int main(){
//     vector<int> arr={1,1,5,5,5,5,6,6,8,8};
//     cout<<removeDuplicates(arr)<<endl;
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }


//optimised approach ->using two pointers
int removeDuplicates2(vector<int>& nums) {
    int i=0;
    int j=1;
    int n=nums.size();
    while(j<n){
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
            j++;
        }
        else j++;
    }
    return i+1;
}
// int main(){
//     vector<int> arr={1,2,2,3,3,3,4,4,4,4};
//     cout<<removeDuplicates2(arr)<<endl;
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }



//5.left rotate an array by one place ( anticlockwise / counterclockwise )
// int main(){
//     int arr[]={1,2,3,4,5};   // {2 3 4 5 1}
//     int first=arr[0];
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=first;
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
//     return 0;
// }


//6.left rotate an array by d places

//brute force approach -> by creating another array or vector 
//TC=O(n+d) , SC=O(d) due to temp container
// int main(){
//     vector<int> arr={1,2,3,4,5,6};
//     int d=3;
//     //code
//     int n = arr.size();
//     d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     //shifting 
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     //putting back
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
//     //printing
//     for(int it:arr){
//         cout<<it<<" ";
//     }
//     return 0;
// }


//optimised approach->reverse method
void rotateArr(vector<int>& arr, int d) {
    int n=arr.size();
    d=d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);
}
// int main(){
//     vector<int> arr={1,2,3,4,5,6,7};
//     rotateArr(arr,3);
//     for(int i:arr) cout<<i<<" ";
//     return 0;
// }


//7.move zeroes to end

//brute force approach ->using another array/vector
//TC=O(2N)=O(N) , SC=O(N)
void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    vector<int> v;
    int zcnt=0;
    for(int i=0;i<n;i++){
        if(nums[i] != 0 ) v.push_back(nums[i]);
        else zcnt++;
    }
    int m=v.size();
    for(int i=0;i<m;i++){
        nums[i]=v[i];
    }
    for(int i=n-zcnt;i<n;i++){
        nums[i]=0;
    }
}
// int main(){
//     vector<int> v={1,2,0,0,0,3,4,21,100,2,0,0,3};
//     moveZeroes(v);
//     for(auto i:v) cout<<i<<" ";
//     return 0;
// }


//optimal approach ->using two pointers
//TC=O(N),SC=O(1)
void pushZerosToEnd(vector<int>& arr) {
    int low=-1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            low = i;
            break;
        }
    }
    if(low==-1) return;
    int high = low+1;
    while(high < n){
        if(arr[high] != 0){
            swap(arr[high],arr[low]);
            high++;
            low++;
        }
        else high++;
    }
}
// int main(){
//     vector<int> v={1,2,0,0,0,3,4,21,0,100,2,0,0,3};
//     pushZerosToEnd(v);
//     for(auto i:v) cout<<i<<" ";
//     return 0;
// }


//8.linear search
//TC=O(N),SC=O(1)
//for first occurence,return index
int linear_search(vector<int> arr,int x){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
}
int main(){
    vector<int> vec={1,10,367,2,387,100,10,7};
    cout<<linear_search(vec,100);  //5
    return 0;
}

