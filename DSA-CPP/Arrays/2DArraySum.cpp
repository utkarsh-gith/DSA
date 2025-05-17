#include<iostream>
#include<cstdlib>
using namespace std;

void printArray(int **arr, int row, int col){

    cout<<endl<<"Array Elements:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

}

void rowSum(int **arr, int row, int col){

    cout<<endl<<"Row Sum:"<<endl;
    for(int i=0;i<row;i++){

        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<"Row "<<i+1<<": "<<sum<<endl;

    }
}

void colSum(int **arr, int row, int col){

    cout<<endl<<"Column Sum:"<<endl;
    for(int j=0;j<col;j++){

        int sum = 0;
        for(int i=0;i<row;i++){
            sum += arr[i][j];
        }
        cout<<"Column "<<j+1<<": "<<sum<<endl;
        
    }
}

void totalSum(int **arr, int row, int col){

    int sum = 0;
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }

    }
    cout<<endl<<"Total Sum: "<<sum<<endl<<endl;
}

int main(){

    int row,col;
    cout<<endl<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;

    int h = (row*col)*1000;

    int **arr = new int *[row];
    for(int i=0;i<row;i++){

        arr[i] = new int[col];

        for(int j=0;j<col;j++){
            arr[i][j] = rand()%(h);
        }

    }

    printArray(arr,row,col);

    rowSum(arr,row,col);

    colSum(arr,row,col);

    totalSum(arr,row,col);

    return 0;
}