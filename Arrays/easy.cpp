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
// int main(){
//     vector<int> vec={1,10,367,2,387,100,10,7};
//     cout<<linear_search(vec,100);  //5
//     return 0;
// }


//9.union of two arrays 


//burte approach -> using set
//TC=O(alogn+blogn+a+b) , n=size of set
//SC=O(a+b)+O(a+b)
// int main(){
//     vector<int> v1={1,2,3,4,5};
//     vector<int> v2 ={1,2,5,7,8,9,6,3,4};
//     //union
//     set<int> st;
//     int a=v1.size();
//     int b=v2.size();
//     for(int i=0;i<a;i++){
//         st.insert(v1[i]);
//     }
//     for(int i=0;i<b;i++){
//         st.insert(v2[i]);
//     }
//     int uni[st.size()]; //array
//     int idx=0;
//     for(auto it:st){
//         uni[idx++]=it;
//     }
//     //print, NOT included in TC and SC
//     for(auto i:uni) cout<<i<<" ";
//     return 0;
// }


//optimal approach ->using two pointers
//only for two sorted arrays
//TC=O(a.size() + b.size()) , SC=O(a.size() + b.size())
vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i] ){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back() !=b[j] ){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(a[i]!=ans.back()){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<m){
        if(b[j]!= ans.back()){
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}
// int main(){
//     //two sortes arrays
//     vector<int>  a={1,2,4,7,9};
//     vector<int> b={2,4,6,8,10};
//     for(auto it:findUnion(a,b)) cout<<it<<" ";
//     return 0;
// }


//intersection of two arrays

//brute approach->using hash array
//only for two sorted arrays,duplicate elements allowed in final answer
//TC=O(n1*n2) , SC=O(n2)
// int main(){
//     vector<int> a={1,2,2,3,4,5,6,6,7,9,10};
//     vector<int> b={2,4,6,6,9,10};
//     int n1=a.size();
//     int n2=b.size();
//     int visited[n2]={0};
//     vector<int> ans;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(a[i] == b[j] && visited[j]==0){
//                 ans.push_back(a[i]);
//                 visited[j]=1;
//                 break;
//             }
//             if(b[j]>a[i]){
//                 break;
//             }
//         }
//     }
//     for(auto it:ans) cout<<it<<" ";
//     return 0;
// }


//optimal approach->Two pointers
//only for sorted arrays
//only unique elements in final ans array
//TC=O(n1+n2) , SC=O(1)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    vector<int> interans;
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums2[j]<nums1[i]){
            j++;
        }
        else{  //nums1[i] == nums2[j]
            if(interans.size()==0 || nums1[i] != interans.back()){
                interans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    return interans;
}
// int main(){
//     vector<int> a={1,10,34,7,3,8,3,1,5,3,2,8};
//     vector<int> b={2,4,10,2};
//     vector<int> ans=intersection(b,a);
//     for(auto it:ans) cout<<it<<" ";
//     return 0;
// }


//10.missing number in an array
//range ->[0,N], size of given array ->N since one no missing in array from this range


//brute approch->linear search
//TC=O(N*N) , SC=O(1)
// int main(){
//     //range->[0,9],N=9 
//     int arr[]={0,3,2,1,4,7,6,9,8};
//     int N=9;  //size of given array or end point of range
//     sort(arr,arr+N);  //for sorted array only
//     for(int i=0;i<=N;i++){
//         int flag=0;
//         for(int j=0;j<N;j++){
//             if(arr[j]==i){
//                 flag++;
//                 break;
//             }
//         }
//         if(flag==0) cout<<i;
//     }
//     return 0;
// }


//brute 2->for sorted array only,by keeping another variable and increment it
//TC=O(N),SC=O(1)
// int main(){
//     //range->[0,9],N=9 
//     int arr[]={0,3,2,1,4,5,6,9,8};
//     int N=9;
//     sort(arr,arr+N);
//     int a=0;
//     for(int i=0;i<N;i++){ //indexes of array
//         if(arr[i] != a){
//             cout<<a;
//             break;
//         }
//         a++;
//     }
//     return 0;
// }


//better approach ->by hashing 
//TC=O(2N) ,SC=O(N)
// int main(){
//     int arr[]={1,0,4,5,2};
//     int N=5;  //N is size of given array
//     int hash1[N+1]={0}; //
//     for(int i=0;i<N;i++){
//         hash1[arr[i]]=1;
//     }
//     for(int i=0;i<=N;i++){
//         if(hash1[i] == 0){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }


//optimal sol->sum of first N natural no method
//TC=O(N),SC=O(1)
int missingNumber(vector<int>& nums) {
    int N=nums.size();
    int sum=(N*(N+1))/2;
    for(int i=0;i<N;i++){ 
        sum=sum-nums[i];
    }
    return sum;
}
// int main(){
//     vector<int> v={1,0,2,9,3,8,4,7,5};
//     cout<<missingNumber(v);
//     return 0;
// }


//optimal approach ->XOR method
//TC=O(N),SC=O(1)
int missingNumbers2(vector<int>& nums) {
    int xor1=0,xor2=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        xor2^=nums[i];
        xor1^=(i+1);
    }
    return xor1^xor2;
}
// int main(){
//     vector<int> v={0,9,1,2,8,6,3,4,5};
//     cout<<missingNumbers2(v);
//     return 0;
// }


//11.maximum consecutive ones in an array
// int main(){
//     vector<int> v={1,1,1,1,0,3,4,56,1,1,1,1,1,1,1,2,2,4,8,10,1,1,0,1};
//     int maxi=0;
//     int currcnt=0;
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         if(v[i]==1){
//             currcnt++;
//             maxi=max(maxi,currcnt);
//         }
//         else{
//             currcnt=0;
//         }
//     }
//     cout<<maxi;
//     return 0;
// }


//12.find the no that appear once , and other no appears twice in array

//brute approach->by linear search
//TC=O(n*n) , SC=O(1)
// int main(){
//     vector<int> v={1,1,3,2,3,2,8,8,5,5,10,11,12,12,11}; //10
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             if(v[j]==v[i] && i!=j){
//                 cnt=1;
//                 break;
//             }
//         }
//         if(cnt==0){
//             cout<<v[i];
//             break;
//         }
//     }
//     return 0;
// }


//better approach -> hashing 
//TC=O(3n) , SC=O(m) where m represents the range of values (1 to 12)
// int main(){
//     vector<int> arr={1,2,1,2,3,4,5,3,4,5,11,10,12,12,10}; //11
//     int n=arr.size();
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi, arr[i]);
//     }
//     int hash[maxi+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1){
//             cout<<arr[i];
//             break;
//         }
//     }
//     return 0;
// }


//better approach ->using map
//TC=O(nlog(n/2+1))+O(n/2+1) , SC=O(n/2+1) due to map
// int  main(){
//     vector<int> arr={10,10,2,2,5,5,6,4,4,7,7,1001,0,0,100};  //6
//     map<long long,int> mp;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     for(auto it:mp){
//         if(it.second==1){
//             cout<<it.first;
//             break;
//         }
//     }
//     return 0;
// }


//optimal approach ->xor method
//TC=O(n) , SC=O(1)
int singleNumber(vector<int>& nums) {
    int xor1=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        xor1=xor1^nums[i];
    }
    return xor1;
}
// int main(){
//     vector<int> nums={2,2,0,0,1,1,10,10,9,4,5,4,5};  //9
//     cout<<singleNumber(nums);
//     return 0;
// }



//13.length of longest subarray with given sum k

//brute approach->3 loop
//array->+ve,-ve,0 all elements can present
//TC=O(n*n*n) , SC=O(1)
// int main(){
//     vector<int> arr={1,0,0,1,1,3,10,6,5,5,1,1,8};  //0 0 1 1 3 10
//     int k=15;
//     int maxilen=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int s=0;
//             for(int a=i;a<=j;a++){
//                 s+=arr[a];
//             }
//             if(s==k) maxilen=max(maxilen,j-i+1);
//         }
//     }
//     cout<<maxilen;
//     return 0;
// }

//brute better->2 loop
//array->+ve,-ve,0 all elements can present
//TC=O(n*n) , SC=O(1)
// int main(){
//     vector<int> arr={1,0,0,1,1,3,10,6,5,5,1,1,8};  //0 0 1 1 3 10
//     int k=15;
//     int maxilen=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==k) maxilen=max(maxilen,j-i+1);
//         }
//     }
//     cout<<maxilen;
//     return 0;
// }


//better approach for (+,0) and optimal for (+,-,0) as elements
//hashmap + prefix sum
//TC=O(nlogn + n) , SC=O(n)
int longestSubarray(vector<int>& arr, int k) {
    map<int,int> presummap;
    int sum=0;
    int maxlen=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=i+1;
        }
        int rem=sum-k;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxlen;
}
// int main(){
//     vector<int> arr={10,-1,100,1,2,3,4,5,10};
//     cout<<longestSubarray(arr,109);
//     return 0;
// }


//most optimal approach->two pointers
//only for arrays containing +ve,0
//TC=O(2N),SC=O(1)
int main(){
    vector<int> arr={10,0,100,1,2,3,4,0};
    int k=110;
    int left=0,right=0;
    int sum=arr[0];
    int maxlen=0;
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    cout<<maxlen;
    return 0;
}

