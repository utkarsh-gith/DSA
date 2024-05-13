#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int data){
           this->data = data;
           this->next = this->prev = NULL;
        }
};

int getLength(Node *head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}

void insertAtHead(Node * &head,int d){
    Node *newNode = new Node(d);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode ->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node *&head,int d){
    if(head==NULL){
        insertAtHead(head,d);
    }
    else{
        Node *newNode = new Node(d);
        Node *temp = head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    }
}
void insertAtPos(Node * &head,int d,int pos){
    if(pos==1){
        insertAtHead(head,d);
    }
    else if(pos==getLength(head)+1){
        insertAtTail(head,d);
    }
    else if(pos>getLength(head)+1){
        cout<<"Invalid Position"<<endl;
    }
    else{
        Node *newNode = new Node(d);
        Node *current = head;
        Node *prev = head;
        int c = 1;
        while(c!=pos && current->next!=NULL){
            c++;
            prev=current;
            current=current->next;
        }
        newNode->next=current;
        newNode->prev=prev;
        prev->next=newNode;
        current->prev=newNode;
    }
}

void deleteAtHead(Node * &head){
    if(head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(head->next==NULL){
        cout<<"Element Deleted = "<<head->data<<endl;
        head=NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        cout<<"Deleted element = "<<temp->data<<endl;
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
        Node *current = head;
        Node *prev = head;
        while(current->next!=NULL){
            prev=current;
            current=current->next;
        }
        prev->next=NULL;
        delete(current);
    }
}
void deleteAtPos(Node * &head,int pos){
    if(head==NULL){
        cout<<"Empty List"<<endl;
    }
    else if(pos==1){
        deleteAtHead(head);
    }
    else if(pos>getLength(head)){
        cout<<"Invalid Postion"<<endl;
    }
    else if(pos==getLength(head)){
        deleteAtTail(head);
    }
    else{
        Node *current = head;
        Node *prev = head;
        int c=1;
        while(c!=pos){
            prev=current;
            current=current->next;
            c++;
        }
        cout<<"Element Deleted = "<<current->data<<endl;
        current->next->prev=prev;
        prev->next=current->next;
        delete(current);
    }
}

void print(Node *head){
    cout<<"Linked List Elements: "<<endl;
    while(head!=NULL){
        cout<<head->data<<"\t";
        head=head->next;
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
        cout<<"7.Print  8.Length  9.Exit"<<endl;
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
            case 8: cout<<"Length of Doubly Linked list: "<<getLength(head)<<endl;
                    break;
            case 9: exit(0);
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}