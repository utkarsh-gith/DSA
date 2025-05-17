#include<iostream>
using namespace std;

int main()
{
    int n,p=0;
    cout<<"Enter the number to be converted to binary:";
    cin>>n;
    int i=0,r=0;
    cout<<n<<"(10):";
    while(n){
        int bit = n&1;
        p=bit*pow(10,r++)+p;
        n=n>>1;
        
    }
    
    cout<<p<<"(2)"<<endl;
}

//or


#include<iostream>
using namespace std;

int main()
{
    int n,p[10];
    cout<<"Enter the number to be converted to binary:";
    cin>>n;
    int i=0;
    cout<<n<<"(10):";
    while(n!=0)
    {
        if(n%2==0)
        {
            p[i++]=0;
        }
        else
        {
            p[i++]=1;
        }
        n=n/2;
        
    }
    for(int j=i-1;j>=0;j--)
        cout<<p[j];
    cout<<"(2)"<<endl;
}
