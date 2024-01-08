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
        while(j<=i)
        {
            cout<<"*"<<"\t"; 
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

/*
i<=n 
*
*       *
*       *       *
*       *       *       * 

j<=n-i+1

*       *       *       *
*       *       *
*       *
*

while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<"\t"; 
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<"*"<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }

                        *
                *       *
        *       *       *
*       *       *       *

while(i<=n)
    {
        int j=1;
        while(j<i)
        {
            cout<<"\t"; 
            j++;
        }
        j=1;
        while(j<=n-i+1)
        {
            cout<<"*"<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }

*       *       *       *
        *       *       *
                *       *
                        *

*/
