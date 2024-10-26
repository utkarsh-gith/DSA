#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high){

    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> v1(n1,0), v2(n2,0);
    for(int i=0;i<n1;i++){
        v1[i] = v[low + i];
    }
    for(int i=0;i<n2;i++){
        v2[i] = v[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while(i<n1 && j<n2){
        if(v1[i] <= v2[j]){
            v[k++] = v1[i++]; 
        }
        else{
            v[k++] = v2[j++];
        }
    }

    while(i<n1){
        v[k++] = v1[i++];
    }
    while(j<n2){
        v[k++] = v2[j++];
    }

}

void mergeSort(vector<int>& v, int low, int high){

    if(low < high){

        int mid = low + (high - low)/2;

        mergeSort(v,low,mid);
        mergeSort(v,mid+1,high);

        merge(v,low,mid,high);
    }
}

int main(){

    cout<<endl<<"Enter size of array"<<endl;
    int n;
    cin>>n;

    vector<int> v(n,0);

    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    mergeSort(v,0,n-1);

    cout<<"Sorted array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i];
    }

    
}