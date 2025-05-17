#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    cout<<endl;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<"\t";  //n-j+1 for opposite
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}
