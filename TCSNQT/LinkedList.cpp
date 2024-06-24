//Linked List
/*

    1. Print list
    2. Insert element at tail
    3. Insert element at head 
    4. Insert element at middle

*/


#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data = 0;
            this->next=NULL;
        }

        Node(int data){
            this->data=data;
            this->next=NULL;
        }   

        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
};


void printMenu(){
    cout<<endl;
    cout<<"Enter choice: (0 to exit)"<<endl;
    cout<<"1. Display list."<<endl;
    cout<<"2. Insert element at tail."<<endl;
    cout<<"3. Insert element at head."<<endl;
    cout<<"4. Insert element at middle."<<endl;
    cout<<""<<endl;
}

void displayList(Node* head){
    Node* temp=head;

    if(temp==NULL){
        cout<<"NULL"<<endl;
        return;
    }   
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}


Node* insertAtTail(Node* head, int value){
    Node* n=new Node(value);
    Node* temp=head;

    if(temp==NULL){
        temp=n;
        return temp;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}

Node* insertAtHead(Node* head, int value){
    Node* n= new Node(value);

    Node* temp=head;
    if(temp==NULL){
        temp=n;
        return temp;
    }

    n->next=temp;
    head=n;
    return head;
    
}
Node* insertAtMiddle(Node* head, int value){

    Node* n=new Node(value);

    Node* temp=head;
    Node* slow=temp;
    Node* fast=temp;

    if(temp==NULL){
        temp=n;
        return temp;
    }


    while(fast!=NULL && fast->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp2= slow->next;
    n->next=temp2;
    slow->next=n;
    return head;

}
int main(){
    Node* head=NULL;

    int choice, n;
    while(1){
        printMenu();
        cin>>choice;


        switch (choice) {
    
            case 0:
                exit(0);
                break;
            
            case 1:
                displayList(head);
                break;

            case 2:
                cout<<"Enter number: ";
                cin>>n;
                head=insertAtTail(head, n);
                break;

            case 3:

                cout<<"Enter number:";
                cin>>n;
                head=insertAtHead(head, n);
                break;

            case 4:

                cout<<"Enter number: ";
                cin>>n;
                head=insertAtMiddle(head, n);
                break;
            default:
                break;
        }
    }
    

}