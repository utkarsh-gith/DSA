#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main(){

    cout<<endl<<"Enter String: ";
    string s;
    cin>>s;

    stack<char> reverse;

    for(int i = 0;i < s.length();i++){
        reverse.push(s[i]);
    }

    s = "";

    while(!reverse.empty()){
        s += reverse.top();
        reverse.pop();
    }

    cout<<"Reversed String: "<<s<<endl;
    return 0;
}