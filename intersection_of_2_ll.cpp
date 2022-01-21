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

int length(node* &head){
    node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

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

//function to intersect to linked list from position "pos" of head 1
void intersect(node* &head1, node* &head2, int pos){

    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }

    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next=temp1;
}

//to return the position at which the intersection has occured
int intersectionPos(node* &head1, node* &head2){
    // cout<<"hello";
    int l1=length(head1);
    int l2=length(head2);
    // cout<<"l1="<<l1<<" l2="<<l2<<endl;


    node *ptr1, *ptr2;
    if(l1>=l2){
        ptr1=head1;
        ptr2=head2;
    }
    else{
        ptr1=head2;
        ptr2=head1;
    }

    for(int i=0; i<abs(l1-l2); i++){
        ptr1=ptr1->next;
    }
    while(ptr1->next!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr1==ptr2){
            return ptr1->data;
        }
    }
    return -1;
}

int main(){

    node *head1=NULL;
    node *head2=NULL;
    
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    display(head1);
    
    insertAtHead(head2, 6);
    insertAtHead(head2, 7);
    insertAtHead(head2, 8);
    insertAtHead(head2, 9);
    insertAtHead(head2, 10);
    display(head2);

    intersect(head1,head2,3);

    display(head2);

    cout<<intersectionPos(head1,head2);

    return 0;
}
