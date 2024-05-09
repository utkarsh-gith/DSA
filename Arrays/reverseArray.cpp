#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void reverse(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {   
        swap(arr,i,j);
        i++;
        j--;
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
    cout<<endl<<"Array Elements:"<<endl;
    display(arr,n);
    reverse(arr,n);
    cout<<endl<<"Reversed Array Elements:"<<endl;
    display(arr,n);
    return 0;
}