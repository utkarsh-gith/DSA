#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}

void create(int arr[],int n)
{
    
    cout<<endl<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int main()
{
    int arr[20],n;
    cout<<endl<<endl<<"Enter array size: ";
    cin>>n;
    create(arr,n);
    cout<<endl<<"Sum of Array = "<<sum(arr,n)<<endl<<endl;
    return 0;
}