#include<iostream>
using namespace std;

int main()
{
    cout<<endl<<"Enter the expression: ";
    int a,b;
    char c;
    cin>>a>>c>>b;
    switch(c)
    {
        case '+': cout<<a<<c<<b<<"="<<a+b<<endl;
                  break;
        case '-': cout<<a<<c<<b<<"="<<a-b<<endl;
                  break;
        case '*': cout<<a<<c<<b<<"="<<a*b<<endl;
                  break;
        case '/': cout<<a<<c<<b<<"="<<a/b<<endl;
                  break;
        case '%': cout<<a<<c<<b<<"="<<a%b<<endl;
                  break;
        default: cout<<"Enter valid expression"<<endl;
    }
    return 0;
}
