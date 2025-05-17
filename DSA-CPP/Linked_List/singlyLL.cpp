#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node * &head,int d){
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node * &head,int d){
    Node *newNode = new Node(d);
    Node *temp = head;
    if(temp==NULL){
        insertAtHead(head,d);
    }
    else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtPos(Node * &head,int d,int pos){
    if(pos==1){
        insertAtHead(head,d);
    }
    else{
        Node *newNode = new Node(d);
        Node *temp = head;
        int count = 1;
        while(count<pos-1 && temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        if(count<pos-1)
            cout<<"Invalid Position"<<endl;
        else{
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
}

void deleteAtHead(Node * &head){
    if(head==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        Node *temp =head;
        cout<<"Deleted element = "<<head->data<<endl;
        head=head->next;
        delete(temp);
    }
}
void deleteAtTail(Node * &head){
    if(head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(head->next==NULL){
        cout<<"Element Deleted = "<<head->data<<endl;
        head=NULL;
    }
    else{
        Node *temp = head;
        Node *prev = head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        cout<<"Element Deleted = "<<temp->data<<endl;
        prev->next=NULL;
        delete(temp);
    }
}
void deleteAtPos(Node * &head,int pos){
    if(head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(pos==1){
        deleteAtHead(head);
    }
    else{
        Node *current = head;
        Node *prev = head;
        int c=1;
        while(c<pos && current->next!=NULL){
            prev = current;
            current = current->next;
            c++;
        }
            if(c!=pos){
                cout<<"Invalid Position"<<endl;
            }
            else{
                cout<<"Element Deleted = "<<current->data;
                prev->next=current->next;
                delete(current);
            }
    }
}

void print(Node * &head){
    Node *temp = head;
    cout<<endl<<"Linked list elements:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl; 
}

int main(){
    Node *head = NULL;
    int n,ele,pos;
    while(1){
        cout<<endl<<"Choose Options:"<<endl;
        cout<<"1. Insert at Head  2. Insert at End  3. Insert at Pos  "<<endl;;
        cout<<"4. Delete at Head  5. Delete at End  6. Delete at Pos  "<<endl;
        cout<<"7.Print  8.Exit"<<endl;
        cout<<"Choice: ";
        cin>>n;
        switch(n){
            case 1: cout<<"Enter element: ";
                    cin>>ele;
                    insertAtHead(head,ele);
                    break;
            case 2: cout<<"Enter element: ";
                    cin>>ele;
                    insertAtTail(head,ele);
                    break;
            case 3: cout<<"Enter element: ";
                    cin>>ele;
                    cout<<"Enter Position: ";
                    cin>>pos;
                    insertAtPos(head,ele,pos);
                    break; 
            case 4: deleteAtHead(head);
                    break; 
            case 5: deleteAtTail(head);
                    break; 
            case 6: cout<<"Enter Position: ";
                    cin>>pos;
                    deleteAtPos(head,pos);
                    break;  
            case 7: print(head);
                    break;
            case 8: exit(0);
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}