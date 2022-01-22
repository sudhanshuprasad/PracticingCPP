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
    node* n=new node(val);
    node* temp=head;

    if(head==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void display(node* &head, int num){
    node* temp=head;
    while(num && temp!=NULL){
        num--;
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"\n";
}


void makeCycle(node* &head, int pos){
    node* temp=head;
    node* n;

    while(pos){
        pos--;
        temp=temp->next;
    }
    n=temp;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}

bool isCyclic(node* &head){
    node* fastptr=head;
    node* slowptr=head;

    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        
        if(slowptr==fastptr){
            return true;
        }
    }

    return false;
}

int main(){
    node* head1=NULL;
    node*head2=NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    display(head1);
    
    makeCycle(head1, 2);
    display(head1,20);

    cout<<isCyclic(head1);

    insertAtTail(head2, 6);
    insertAtTail(head2, 7);
    insertAtTail(head2, 8);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    display(head2);

    cout<<isCyclic(head1);
}