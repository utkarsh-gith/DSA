#include<iostream>
#include<array>
using namespace std;

void create(int arr[],int n)
{
    
    cout<<endl<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void print(int arr[],int n)
{
    cout<<endl<<"Array elements: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int getMax(int arr[],int n)
{
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_ele=max(max_ele,arr[i]);
        // if(arr[i]>max)  
        //     max=arr[i];
    }
    return max_ele;
}

int getMin(int arr[],int n)
{
    int min_ele=INT_MAX;
    for(int i=0;i<n;i++)
    {
        min_ele=min(min_ele,arr[i]);
        // if(arr[i]<min)  
        //     min=arr[i];
    }
    return min_ele;
}

int main()
{
    int arr[20],n;
    cout<<endl<<"Enter array size: ";
    cin>>n;
    create(arr,n);
    print(arr,n);
    cout<<endl<<"Maximum value = "<<getMax(arr,n)<<endl;
    cout<<endl<<"Minimum value = "<<getMin(arr,n)<<endl;
}
