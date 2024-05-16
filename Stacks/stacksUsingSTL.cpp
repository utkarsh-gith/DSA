#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s1){
    if(s1.empty())
        cout<<"Stack is empty"<<endl;
    else{
        cout<<"Stack elements:\t";
        while(!s1.empty()){
            cout<<s1.top()<<"\t";
            s1.pop();
        }
        cout<<endl;
    }
}

int main(){
    stack<int> s;
    while(1){
        int ch,ele;
        cout<<endl<<"Choices: 1.Push 2.Pop 3.Top 4.Print 5.Size 6.Check Empty 7.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1: cout<<"Enter element to be pushed: ";
                cin>>ele;
                s.push(ele);
                break;
        case 2: if(s.empty())
                    cout<<"Stack is empty"<<endl;
                else{
                    cout<<"Element popped: "<<s.top()<<endl;
                    s.pop();
                }
                break;
        case 3: if(s.empty())
                    cout<<"Stack is empty"<<endl;
                else    
                    cout<<"Top element: "<<s.top()<<endl;
                break;
        case 4: print(s);
                break;
        case 5: cout<<"Size of Stack = "<<s.size()<<endl;
                break;
        case 6: if(s.empty())
                    cout<<"Stack is empty"<<endl;
                else
                    cout<<"Not Empty"<<endl;
                break;
        case 7: exit(0);
        default: cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}