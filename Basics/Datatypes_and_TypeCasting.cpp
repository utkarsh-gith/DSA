#include<iostream>
using namespace std;

int main(){

    char a='a';
    int b= 1234;
    float c = 12.3;
    double d =12.34;

    cout<<"a="<<a<<endl;
    cout<<"Size of char a="<<sizeof(a)<<endl;

    cout<<"b="<<b<<endl;
    cout<<"Size of int b="<<sizeof(b)<<endl;

    cout<<"c="<<c<<endl;
    cout<<"Size offloat c="<<sizeof(c)<<endl;

    cout<<"d="<<d<<endl;
    cout<<"Size of double d="<<sizeof(d)<<endl;

    int f=-112;
    //-ve number stored-- 112(10)= 0000 0000 0111 0000 (2) ->(1's Complement) = 1111 1111 1000 1111 -> (2's Complement) = 1111 1111 1001 1111
    cout<<"f="<<f<<endl;

    unsigned g=-112;
    cout<<"g="<<g<<endl;

    int e='a';
    cout<<e<<endl;
    
    char ch=98;
    cout<<ch<<endl;

    char ch1=123456;
    // 123456(10)=11110001001000000(2)
    // char 8 bit = only last 8 bits = 01000000 = 64
    // ASCII 64 = @
    cout<<ch1<<endl;

    return 0;
}
