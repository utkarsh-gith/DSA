#include<iostream>
using namespace std;

// tail points at last pointer, which can be used to get first and last both element
// so do not need to use gaed pointer


class Node{
    public:
        int data;
        Node *next;

        Node (int data){
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Element deleted: "<<value<<endl;
        }
};

int getLength(Node *tail){
    int c=1;
    if(tail == NULL){
        return 0;
    }
    else{
        Node *temp = tail;
        while(temp->next != tail){
            c++;
            temp = temp->next;
        }
        return c;
    }
}

void print(Node *tail){
    if(tail == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        Node *temp = tail;
        cout<<"LL elements :"<<"\t";
        do{
            cout<<temp->data<<"\t";
            temp = temp->next;
        }while(temp != tail);
        cout<<endl;
    }
}

void insertNode(Node * &tail,int ele, int d){
     if(tail == NULL){
        cout<<"Empty List"<<endl;
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        cout<<"Data added as first node"<<endl;
     }
     else{
        Node *current = tail;
        while(current->data != ele && current->next != tail){
            current = current->next;
        }
        if(current->data != ele){
            cout<<"Element not found"<<endl;
            cout<<"New data not added"<<endl;
        }
        else{
            Node *newNode = new Node(d);
            newNode->next = current->next;
            current->next = newNode;
            cout<<"New data added"<<endl;
        }
     }
}

void deleteNode(Node * &tail,int ele){
    if(tail == NULL){
        cout<<"Empty List"<<endl;
    }
    else if(tail == tail->next){
        if(tail->data == ele){
            cout<<"element deleted"<<tail->data;
            delete tail;
            tail = NULL;
        }
        else{
            cout<<"Element not found"<<endl;
        }
    }
    else{
        Node *current = tail->next;
        Node *prev = tail;
        while(current->data != ele && current->next != tail->next){
            prev = current;
            current = current->next;
        }
        cout<<prev->data<<endl;
        cout<<current->data<<endl;
        if(current->data != ele){
            cout<<"Element does not exist"<<endl;
        }
        else{
            if(tail == current){
                tail = current->next;
            }
            prev->next = current->next;
            current -> next = NULL;
            delete current; 
        }
    }
}

int main(){
    Node *tail = NULL;
    while(1){
        cout<<endl<<"Choose Options:"<<endl;
        cout<<"1. Insert  2.Delete  3.Length  4.Display  5.Exit"<<endl;
        int ch,ele,data;
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter data to be added: ";
                    cin>>data;
                    cout<<"Enter the element after which data to be inserted: ";
                    cin>>ele;
                    insertNode(tail,ele,data);
                    break;
            case 2: cout<<"Enter data to be deleted: ";
                    cin>>ele;
                    deleteNode(tail,ele);
                    break;
            case 3: cout<<"Length of LL = "<<getLength(tail)<<endl;
                    break;
            case 4: print(tail);
                    break;
            case 5: exit(0);
            default: cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}