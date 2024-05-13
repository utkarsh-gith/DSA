// Problem statement:
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.





// Idea: XOR of any elemnt with itself is 0 and XOR of 0 with any elemnt is the element itself

#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0 ; i<size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elemnts with all elemnts repeating twice except one element:"<<endl;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unique element = "<<findUnique(arr,n)<<endl;
    return 0;
}