#include<iostream>
#include<vector>
using namespace std;

// void swap1(int arr[],int n)
// {
//     for(int i=0;i<n-1;i=i+2)
//     {
//         swap(arr[i],arr[i+1]); //built in function
//         // int temp = arr[i];
//         // arr[i]=arr[i+1];
//         // arr[i+1]=temp;
//     }
// }

// void create(int arr[],int n)
// { 
//     cout<<endl<<"Enter array elements: "<<endl;
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
// }

// void display(int arr[],int n)
// {
//     cout<<endl<<"Array Elements:"<<endl;
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<"\t";
//     cout<<endl;
// }

// int main()
// {
//     int arr[20],n;
//     cout<<endl<<endl<<"Enter array size: ";
//     cin>>n;
//     create(arr,n);
//     display(arr,n);
//     swap1(arr,n);
//     display(arr,n);
//     return 0;
// }

 vector<int> nums = {1, 2, 3, 4};
    
    int n = nums.size();
    nums.resize(2 * n); // Resize the vector to double its size

    // Copy elements to the end of the vector
    for(int i = 0; i < n; i++)
        nums[i + n] = nums[i];

    // Output the contents of the vector
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    return 0;