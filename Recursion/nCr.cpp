#include<iostream>
using namespace std;

int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return(a*factorial(a-1));
} 

int main()
{
    cout<<endl<<"Enter values of n and r"<<endl;
    int n,r;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<double(factorial(n)/(factorial(r)*factorial(n-r)))<<endl;
    return 0;
}
