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
        static int count=1;
        while(j<=i)
        {
            cout<<count<<"\t"; 
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

/*
1
2       3
4       5       6
7       8       9       10
*/
