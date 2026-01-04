#include<bits/stdc++.h>
using namespace std;


//pairs
// int main(){
//     pair<int,int> p={1,3};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<char,float> a={'a',2.1};
//     cout<<a.first<<" "<<a.second<<endl;
//     //nested pairs
//     pair<char,pair<int,int>> b={'A',{1,2}};
//     cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;
//     //pair array
//     pair<int,int> arr[3]={{1,2},{2,5},{5,1}};
//     cout<<arr[2].first<<" "<<arr[0].second<<endl;
//     return 0;
// }


//vectors
// int main(){
//     //defining and assigning values to vectors
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);
//     //input value at time of defining vector 
//     vector<int> vector1={10,20,30,40,1,2,3,49,10,33,19,22,93};
//     //vector of pair data type
//     vector<pair<int,int>> vec;
//     vec.push_back({1,2});
//     vec.emplace_back(3,4);
//     //pre initialised vectors
//     vector<int> ve(5,100);   //{100,100,100,100,100}
//     vector<int> vect(5);   //only size,vector containing 5 garbage values
//     vector<int> v1(5,20);     // {20,20,20,20,20}
//     //copy the v1 vector in new v2 vector
//     vector<int>v2(v1);
//     //access the elements
//     cout<<v[0]<<" "<<v.at(0)<<" "<<v[1]<<endl;  //two direct methods 
//     cout<<vec[0].first<<" "<<vec[1].second<<endl;
//     cout<<ve[3]<<" "<<ve[0]<<endl;
//     cout<<vect[3]<<" "<<vect[0]<<endl;
//     cout<<v1[3]<<" "<<v1[0]<<endl;
//     cout<<v2[3]<<" "<<v2[0]<<endl;
//     cout<<vector1[0]<<vector1[1]<<vector1[2]<<vector1[3]<<vector1[12]<<endl;
//     //accessing values using iterators
//     //vector1={10,20,30,40,1,2,3,49,10,33,19,22,93};  
//     //vec.begin()
//     vector<int>::iterator it=vector1.begin();
//     cout<<*(it)<<endl;  
//     //vec.end()
//     vector<int>::iterator it1=vector1.end();
//     cout<<*(it1)<<endl;
//     it1--;
//     cout<<*(it1)<<endl;
//     //vec.back()
//     cout<<vector1.back()<<endl;
//     //to ptint the whole vector using loops
//     //1 method   
//     //vector1={10,20,30,40,1,2,3,49,10,33,19,22,93};
//     for(int i=0;i<=12;i++) cout<<vector1[i]<<" ";
//     cout<<endl;
//     //2nd method
//     for(vector<int>::iterator iter=vector1.begin() ; iter!=vector1.end() ; iter++) cout<<*(iter)<<" ";
//     cout<<endl;
//     //method 3
//     for(auto its=vector1.begin() ; its!=vector1.end() ; its++) cout<<*(its)<<" ";
//     cout<<endl;
//     //method 4
//     for(auto it:vector1) cout<<it<<" ";
//     cout<<endl;
//     //deletion in a vector
//     //vector1={10,20,30,40,1,2,3,49,10,33,19,22,93};
//     //1. erase()
//     vector1.erase(vector1.begin()+1);
//     vector1.erase(vector1.begin());
//     vector1.erase(vector1.begin()+3,vector1.begin()+5);
//     //printing whole vector
//     for(auto its=vector1.begin() ; its!=vector1.end() ; its++) cout<<*(its)<<" ";
//     cout<<endl;
//     //inserting elements in a vector
//     vector<int>vector2(2,100);  //{100,100} 
//     vector2.insert(vector2.begin(),300);  //{300 100 100}
//     vector2.insert(vector2.begin()+1,2,10);  //{300 10 10  100 100}
//     //inserting a vector inside another vector
//     vector<int> copy(2,50); //{50 50}
//     vector<int> cpy={1,2,3,4,5,6,7};  
//     vector2.insert(vector2.begin(),copy.begin(),copy.end()); //{50 50 300 10 10 100 100}
//     vector2.insert(vector2.begin()+1,cpy.begin()+1,cpy.end()-2); //{50 2 3 4 5 50 300 10 10 100 100}
//     //printing 
//     for(auto it:vector2) cout<<it<<" ";
//     cout<<endl;
//     //size of vector 
//     cout<<vector2.size(); //11
//     cout<<endl;
//     //delete last element 
//     vector2.pop_back();
//     for(auto it:vector2) cout<<it<<" ";  //{50 2 3 4 5 50 300 10 10 100}
//     cout<<endl;
//     //swapping between two vectors
//     vector<char> s1={'a','b'};
//     vector<char> s2={'c','d'};
//     s1.swap(s2);
//     for(auto it:s1) cout<<it<<" ";
//     cout<<endl;
//     for(auto it:s2) cout<<it<<" ";
//     cout<<endl;
//     //erase entire vector,male it empty vector
//     vector2.clear();
//     for(auto it:vector2) cout<<it<<" ";
//     //to check if vector is empty or not
//     cout<<vector2.empty();
//     return 0;
// }


//for each loop
// int main(){
//     char s[]={'p','s','a','a','\0'};
//     for(auto i:s ){        //format ->(iterator:variable)
//     cout<<i;
//     }
//     return 0;    
// }


//pairs
// int main(){
//     list<int>ls;  //declare
//     ls.push_back(2);  //{2}
//     ls.emplace_back(9); //{2,9}
//     //front operations
//     ls.push_front(10);   //{10,2,9}
//     ls.emplace_front(52); //{52,10,2,9}
//     ls.emplace_front();   //{0,52,10,2,9}
//     //printing all elements in list
//     for(list<int>::iterator i=ls.begin();i!=ls.end();i++){
//         cout<<*(i)<<" ";
//     }
//     cout<<endl;
//     for(auto i:ls){
//         cout<<i<<" ";
//     }
// }



//deque
// int main(){
//     deque<int>d;     //declare
//     d.push_back(1);
//     d.emplace_back(2); 
//     d.push_front(4);
//     d.emplace_front(3);
//     d.pop_back();
//     d.pop_front();
//     cout<<d.back()<<endl;
//     cout<<d.front()<<endl;
//     //rest functions same as vector
// }


//stack
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(3);
//     st.emplace(5);  //{5,3,3,2,1}
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     cout<<st.empty()<<endl;
//     //swapping
//     stack<int>st1,st2;
//     st1.swap(st2);
// }


//queue
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.emplace(4);

//     cout<<q.back()<<endl;
//     cout<<q.back()-1<<endl;
//     q.back()+=5;
//     cout<<q.back()<<endl;
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;

// }
