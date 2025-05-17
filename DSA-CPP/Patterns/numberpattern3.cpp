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
            cout<<i<<"\t"; 
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
2       2
3       3       3
4       4       4       4

*/
