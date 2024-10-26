#include<iostream>
using namespace std;

void count(int n){

    if(n==0)
        return ;

    count(n-1);

    cout<<n<<"\t";
}

int main(){
    
    cout<<endl<<"Enter number:";
    int n;
    cin>>n;
    cout<<endl;
    count(n);
    cout<<endl;
    return 0;
    
}