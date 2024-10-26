#include<iostream>
using namespace std;

int lSearch(int arr[],int n,int key){
    if(n == 0){
        return -0;
    }
    if(arr[0] == key){
        return 1;
    }

    return lSearch(arr+1,n-1,key);
}

int main(){

    int arr[5] = {1,3,5,7,9};
    int key = 5;
    
    int ans = lSearch(arr,5,key);

    if(ans == -1){
        cout<<endl<<key<<" not found"<<endl;
    }
    else{
        cout<<endl<<key<<" found "<<endl;
    }
    return 0;

}