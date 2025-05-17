#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter number to be reversed:";
    cin>>x;
    int s=0,max_int=pow(2,31)-1;
    cout<<"Reverse of "<<x<<" is:";
    while(x!=0)
    {
         if((s<-(max_int+1)/10)||(s>max_int/10))
         {
            cout<<"Invalid"<<endl;
            exit(0);
         }
        s=s*10+(x%10);
        x=x/10;
    }
    cout<<s<<endl;
}
