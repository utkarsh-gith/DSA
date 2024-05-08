#include<iostream>
using namespace std;

int main()
{
    int n,p=0;
    cout<<"Enter the binary number to be converted to decimal:";
    cin>>n;
    int i=0,r=0;
    cout<<n<<"(2):";
    while(n){
        
        p=(n%10)*pow(2,r++)+p;
        n=n/10;
        
    }
    
    cout<<p<<"(10)"<<endl;
}
