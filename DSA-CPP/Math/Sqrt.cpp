#include<iostream>
using namespace std;

int sqrt(int n){
    int low = 0;
    int high = n;
    int mid,square;

    while(low <= high){

        mid = low + (high - low)/2;
        square = mid * mid;
        
        if(square == n){
            return mid;
        }
        else if(square < n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }

    if(square < n){
        return mid;
    }
    else{
        return mid - 1;
    }

}

double precision(int n, int x,int p){

    double a = 1;
    double ans = x;

    while(p > 0){
        a /= 10;
        
        for(double i=ans;i*i<n;i=i+a){
            ans = i;
        }

        p--;
    }

    return ans;

}

int main(){
    
    int x;
    cout<<endl<<"Enter the number: ";
    cin>>x;
    
    int p;
    cout<<"Enter precision: ";
    cin>>p;

    int s = sqrt(x);

    double pre = precision(x,s,p);

    cout<<"Square Root of "<<x<<" = "<<pre;

    return 0;
}