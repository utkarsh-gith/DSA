#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){

    if(n == 0 || n == 1){
        return 1;
    }

    if(arr[0] > arr[1]){
        return 0;
    }
    
    return isSorted(arr+1,n-1);
}

int main(){

    int arr[5] = {5, 2, 3, 4, 5};
    cout<<endl<<isSorted(arr,5)<<endl;
    return 0;
    
}