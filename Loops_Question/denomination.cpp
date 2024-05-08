#include<iostream>
using namespace std;

int main()
{
    cout<<endl<<"DENOMINATION AVAILABLE: Rs.500,  Rs.200,  Rs.100,  Rs.50,  Rs.10,  Rs.5,  Rs.2,  Rs.1"<<endl;
    int a[8],b[8]={500,200,100,50,10,5,2,1},c,i=0;
    cout<<"Enter amount: ";
    cin>>c;
    while(i<=7)
    {
        a[i]=c/b[i];
        c = c % b[i];
        i++;
    }
    i=0;
    cout<<"Required denomination: "<<endl;
    while(i<=7)
    {
        if(a[i]!=0)
        {
            cout<<"Rs."<<b[i]<<" = "<<a[i]<<endl<<endl;
        }
        i++;
    }
    return 0;
}
