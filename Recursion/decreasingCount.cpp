#include<iostream>
using namespace std;

void count(int n){

    if(n==0)
        return ;
    
    cout<<n<<"\t";

    count(n-1);
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