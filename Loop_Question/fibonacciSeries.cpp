#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,n3,n;
    cout<<"Enter value of n:";
    cin>>n;
    if(n<=0)
    {
        cout<<"Seriously?"<<endl;
    }
    else if(n==1)
    {
        cout<<0<<endl;
    }
    else if(n==1)
    {
        cout<<"0\t1"<<endl;
    }
    else
    {
        cout<<"0\t1\t";
        for(int i=2;i<n;i++)
        {
            n3=n2+n1;
            cout<<n3<<"\t";
            n1=n2;
            n2=n3;
        }
    }
    return 0;
}

/*
Enter value of n:20
0       1       1       2       3       5       8       13      21      34      55      89      144     233     377      610     987     1597    2584    4181
*/
