#include<iostream>
#include<string>
using namespace std;

/*
int main(){
    //aditya
    char arr[6]={'a','d','i','t','y','a'};
    for(int i=0;i<=5;i++){
        cout<<arr[i];
    }
}
*/


/*
//declaration
int main(){
    string x="aditya pandey";
    cout<<x;
}
*/

/*
//input by user
int main(){
    cout<<"enter a word : ";   //no space between words
    string a;
    cin>>a;
    cout<<a;
}
*/


/*
//to input string with spaces between words
int main(){
    string a;
    cout<<"Enter a string : ";
    getline(cin,a);
    cout<<a;
}
*/

/*
//access one char from string , changing one character from string
int main(){
    string a="aditya pandey";
    cout<<a<<endl;
    cout<<a[2]<<endl;
    a[2]= 's';
    cout<<a[2]<<endl;
    cout<<a<<endl;
}
*/


/*
//length(),size()
int main(){
    string a="aditya pandey";
    cout<<a.length()<<endl;
    cout<<a.size();
}
*/

/*
int main(){
    string a="aditya pandey";
    int n = a.length();
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
*/



/*
//input a string and count vowels and consonants in it
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<s<<endl;
    int v=0,c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v++;
        }
        else if(s[i] !=' '){
            c++;
        } 
    }
    cout<<"no of vowels : "<<v<<endl;
    cout<<"no of consonants : "<<c;
}
*/

/*
//push_back()  -> add single chr at end of string
int main(){
    string s="aditya";
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
    s.push_back('y');
    cout<<s<<endl;
}
*/


/*
//pop_back() -> removes a single ch from end of string
int main(){
    string s="aditya";
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
}
*/



/*
//append() -> add another string at end of the string
int main(){
    string s="aditya";
    cout<<s<<endl;
    s.append(" p");
    cout<<s<<endl;
    s.append("andey");
    cout<<s<<endl;
}
*/



/*
//clear() -> empty the string
int main(){
    string s="aditya";
    cout<<s<<endl;
    cout<<s.length();
    s.clear();
    cout<<s<<endl;
    cout<<s.length();
}
*/


/*
// + operator -> adds two strings
int main(){
    string s="aditya";
    cout<<s<<" "<<s.length()<<endl;
    s=s+" pandey";
    cout<<s<<" "<<s.length()<<endl;
    s="my name is " + s ;
    cout<<s<<" "<<s.length();
}
*/

/*
//reversing a string method 1
int main(){
    string a = "aditya";
    cout<<a<<" "<<a.length()<<endl;
    int n= a.length();
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a<<" "<<a.length()<<endl;
}
*/



/*
//reversing only first half of a string
int main(){
    string s="aditya";
    cout<<s<<endl;
    int n=s.length(); //n=6
    int i=0;
    int j=n/2-1;
    while(i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}
*/



/*
// reverse the substring from position 2 to 5    //imp -->to reverse an array
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<s<<endl;
    int n=s.length(); //n=6
    int i=1;   //indexes
    int j=4;    //indexes
    while(i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}
*/


/*
//to_string() -> convert int to string
int main(){
    int a = 184217;
    string s = to_string(a);
    cout<<a<<endl;
    cout<<s<<endl;
    s+="ap";
    cout<<s<<endl;
}
*/


/*
//total no of digits in a number using int to string conversion
int main(){
    int x=1245355;
    string s = to_string(x);
    cout<<s.length();
}
*/



/*
//stoi -> string to int conversion
int main(){
    string s ="21877826";
    int a = stoi(s);
    cout<<a<<endl;
    cout<<a+1;
}
*/






