#include<iostream>
using namespace std;

void swap1(int arr[],int n)
{
    for(int i=0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]); //built in function
        // int temp = arr[i];
        // arr[i]=arr[i+1];
        // arr[i+1]=temp;
    }
}

void create(int arr[],int n)
{ 
    cout<<endl<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void display(int arr[],int n)
{
    cout<<endl<<"Array Elements:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int main()
{
    int arr[20],n;
    cout<<endl<<endl<<"Enter array size: ";
    cin>>n;
    create(arr,n);
    display(arr,n);
    swap1(arr,n);
    display(arr,n);
    return 0;
}