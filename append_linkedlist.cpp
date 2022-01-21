#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head, int val){
    
    node* n = new node(val);

    n->next=head;
    head=n;
}

void display( node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* &head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    
    if(head==NULL){
        return;
    }
    if (head->next==NULL || head->data==val){
        deleteAtHead(head);
        return;
    }

    node* temp=head;

    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void append(node* &head, int pos){
    node* temp = head;
    node* newhead,*newtail;

    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    newtail=temp;
    newhead=temp->next;
    newtail->next=NULL;
    
    temp=newhead;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;

    head=newhead;
}

int main(){
    
    node* head=NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    
    display(head);

    append(head,4);
    display(head);
    
    return 0;
}
