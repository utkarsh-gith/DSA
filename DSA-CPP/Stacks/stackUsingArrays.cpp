#include<iostream>
using namespace std;

class Stack{

    int top;
    int *arr;
    int size;

    public:

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele){
        if(size - top > 1){
            arr[++top] = ele;
        }else{
            cout<<endl<<"Stack overflow"<<endl;
        } 
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout<<endl<<"Stack underflow"<<endl;  
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout<<endl<<"Stack underflow"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    void print(){
        if(top == -1){
            cout<<endl<<"Stack underflow"<<endl;
        }else{
            cout<<endl<<"Stack elements: ";
            for(int i = 0;i <= top; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){

    cout<<endl<<"Enter stack size: ";
    int n;
    cin>>n;

    Stack s(n);

    while(1){
        int ch,ele;
        cout<<endl<<"Choices: 1.Push 2.Pop 3.Top 4.Print 5.Size 6.Check Empty 7.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1: cout<<endl<<"Enter element to be pushed: ";
                cin>>ele;
                s.push(ele);
                break;
        case 2: s.pop();
                break;
        case 3: ele = s.peek();
                if(ele != -1){
                    cout<<endl<<"Element peeked: "<<ele<<endl;
                }
                break;
        case 4: s.print();
                break;
        case 5: cout<<"Size of Stack = "<<n<<endl;
                break;
        case 6: if(s.isEmpty())
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

