#include<iostream>
using namespace std;

int factorial(int a)
{
    if(a==0)
        return 1;
    
    return(a*factorial(a-1));
} 

int main()
{
    cout<<endl<<"Enter number:";
    int n;
    cin>>n;
    cout<<"Factorial of n: "<<factorial(n)<<endl;
    return 0;
}
