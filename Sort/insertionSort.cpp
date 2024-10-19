// Space Complexity - O(1)
// Time Complexity - Best Case: O(n )
//                 - Worst Case: O(n^2)
//Adaptable
//Stable

#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

void printEle(vector<int>& nums){
    cout<<"Array Elements:"<<"\t";

    int n = nums.size();

    for(int i=0;i<n;i++){
        cout<<nums[i]<<"\t";
    }
    cout<<endl;

}

void insertionSort(vector<int>& nums){
    
    int n = nums.size();
    int key;

    for(int i=1;i<n;i++){
        key = nums[i];
        int j = i - 1;

        while(j >= 0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1] = key;
    }

}

int main(){
    
    int n;
    cout<<endl<<"Enter number of elements: ";
    cin>>n;

    vector<int> nums;
    int h = n * n;

    for(int i=0;i<n;i++){
        nums.push_back(rand()%(h + 1));
    }

    printEle(nums);

    insertionSort(nums);

    printEle(nums);

    return 0;
}