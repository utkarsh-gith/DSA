// to find LCM we can use the formula:
//     GCD * LCM = a * b

#include<iostream>
using namespace std;


int gcd_r(int a,int b){

    if(a==0)
        return b;
    return gcd_r(b%a,a);
}

int gcd_i(int a,int b){

    while(a!=0){

        int r = b%a;
        b = a;
        a = r;
    }
    return b;
}

int main(){

    cout<<endl<<"Enter two numbers"<<endl;
    int a,b;
    cin>>a>>b;

    int x,y;
    (a<b)?(x=a,y=b):(x=b,y=a);

    int hcf1 = gcd_r(x,y);
    int hcf2 = gcd_i(x,y);

    cout<<"GCD of "<<x<<" and "<<y<<" is "<<hcf1<<endl;
    cout<<"GCD of "<<x<<" and "<<y<<" is "<<hcf2<<endl;
}