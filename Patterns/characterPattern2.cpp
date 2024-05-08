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
            cout<<char(64+i)<<"\t";  //cout<<char('A'+i-1)<<"\t"; 
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

/*
Enter number of rows
3

A
B       B
C       C       C
*/

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
            cout<<char('A'+count-1)<<"\t"; 
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

/*
Enter number of rows
4

A
B       C
D       E       F
G       H       I       J
*/

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
            cout<<char('A'+j+i-2)<<"\t"; 
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}

/*
Enter number of rows
4

A
B       C
C       D       E
D       E       F       G
*/
