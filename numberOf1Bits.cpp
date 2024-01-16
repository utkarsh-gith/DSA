// Number of 1 Bits

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be checked:";
    cin>>n;
    int s=0;
    while(n!=0)
    {
        if(n&1)
        s++;
        n=n>>1;
    }
    cout<<"Number of 1 Bits:"<<s<<endl;
}

or

/*
int result = 0;
        while (n) {
            result += (n & 1u);
            n >>= 1;
        }    
        return result;
*/
/*
Enter the number to be checked:11
Number of 1 Bits:3
*/
