#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* previous;

        node(int val){
            data=val;
            next=NULL;
            previous=NULL;
        }
};

void deletion(node* &head, int key){

    node* temp=head;

    if(head==NULL){
        return;
    }
    if(temp->data==key){
        head=head->next;
        head->previous=NULL;
        delete temp;
        return;
    }

    while (temp->next->data!=key && temp->next->next!=NULL){
        // if(temp->next!=NULL){
        //     return;
        // }
        temp=temp->next;
    }

    if(temp->next->data!=key && temp->next!=NULL){
        return;
    }

    node* n=temp->next;
    temp->next=temp->next->next;
    if(temp->next!=NULL){
        temp->next->previous=temp;
    }

    delete n;

    return;
}

void insert_at_head(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
        head->previous=n;
    head=n;
}

void insert_at_tail(node* &head, int val){

    if(head==NULL){
        insert_at_head(head, val);
        return;
    }

    node* n = new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}

void display( node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 5);
    insert_at_tail(head, 4);
    display(head);
    deletion(head, 5);
    display(head);
}