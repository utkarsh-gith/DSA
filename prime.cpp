#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be checked:";
    cin>>n;
    if(n<0)
    {
        cout<<"Not at all prime"<<endl;
        exit(0);
    }
    else if(n==0 || n==1)
    {
        cout<<"Neither prime nor composite"<<endl;
        exit(0);
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if((n%i)==0)
            {
                cout<<n<<" is not prime"<<endl;
                exit(0);
            }
        }
    }
    cout<<n<<" is prime"<<endl;
    return 0;
}

