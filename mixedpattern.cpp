#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j<<"\t";
            j++;
        }
        j=1;
        while(j<i)
        {
            cout<<"*\t*\t";
            j++;
        }
        j=1;
        while(j<=n-i+1)
        {
            cout<<n-j-i+2<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/*
Enter number of rows
5

1       2       3       4       5       5       4       3       2       1
1       2       3       4       *       *       4       3       2       1
1       2       3       *       *       *       *       3       2       1
1       2       *       *       *       *       *       *       2       1
1       *       *       *       *       *       *       *       *       1
*/
