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

void bubbleSort(vector<int>& nums){
    
    int n = nums.size();

    for(int i=n-1;i>=0;i--){

        bool swapped = false;

        for(int j=0;j<i;j++){

            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }

        }

        if(swapped == false){
            // if the array is already sorted then it will not swap and then no need to sort
            break;
        }
        
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

    bubbleSort(nums);

    printEle(nums);

    return 0;
}