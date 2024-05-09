#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

void create(int arr[],int n)
{
    
    cout<<endl<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int main()
{
    int arr[20],n,key;
    cout<<endl<<endl<<"Enter array size: ";
    cin>>n;
    create(arr,n);
    cout<<"Enter element to be searched: ";
    cin>>key;
    int search = linearSearch(arr,n,key);
    if(search==-1)
        cout<<endl<<key<<" not found"<<endl<<endl;
    else
        cout<<endl<<key<<" found at index "<<search<<endl<<endl;
    return 0;
}