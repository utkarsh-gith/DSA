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
        int j=i;

        while(j>=1)
        {
            cout<<j<<"\t"; 
            j--;
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
3       4       5
4       5       6       7
*/

#include<iostream>
using namespace std;

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
            cout<<i-j+1<<"\t"; 
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
2       1
3       2       1
4       3       2       1

*/
