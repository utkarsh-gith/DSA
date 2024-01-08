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
        static int j=1;
        while(j<=i*n)
        {
            cout<<j<<"\t"; //n*n-j+1 for opposite
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}
//can also creat variable count and run i=1 to n, j=1 to n, and increment count 
