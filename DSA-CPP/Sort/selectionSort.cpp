// Space Complexity - O(1)
// Time Complexity - Best Case: O(n^2)
//                 - Worst Case: O(n^2)
//Use Case - usable only for small set of elements


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

void selectionSort(vector<int>& nums){
    
    int n = nums.size();

    for(int i=0;i<n;i++){

        int minIndex = i;

        for(int j=i+1;j<n;j++){

            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }

        }
        swap(nums[i],nums[minIndex]);
    }
}

int main(){
    
    int n;
    cout<<endl<<"Enter number of elements: ";
    cin>>n;

    vector<int> nums;
    int h = n * 100;

    for(int i=0;i<n;i++){
        nums.push_back(rand()%(h + 1));
    }

    printEle(nums);

    selectionSort(nums);

    printEle(nums);

    return 0;
}