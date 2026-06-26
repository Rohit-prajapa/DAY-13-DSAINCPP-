#include <iostream>
using namespace std;

class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void display(Node* head){
  // Forward Traversal
    cout << "Forward: ";
    Node* p = head;
    while(p != NULL){
        cout << p->data << " ";
        if(p->next == NULL)
            break;
        p = p->next;
    }

    // Backward Traversal
    cout << "\nBackward: ";
    while(p != NULL){
        cout << p->data << " ";
        p = p->prev;
    }
}

int count(Node* head){
    int c=0;
    Node* p=head;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void insert(Node* head, int pos, int x){
    Node* t=new Node(x);
    if(pos<0 && pos>count(head)){
        return;
    }
    if(pos==0){
        new Node(x);
        t->data=x;
        t->prev=NULL;
        t->next=head;
        head=t;
    }
    else{
        Node* p=head;
        new Node(x);
        t->data=x;
        for(int i=0; i<pos-1; i++){
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        p->next->prev=t;
        p->next=t;
    }
}

void Reverse(Node* &head){
    Node* p=head;
    Node* temp=NULL;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;

        if(p->prev==NULL){
            head=p;
        }
        p=p->prev;
    }
}
int main(){

    
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);


    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    
    Node* head = first;

    display(head);

    cout<<endl;

    cout<<count(head);

    cout<<endl;

    insert(head,3,90);
    display(head);

    cout<<endl;

    Reverse(head);

    display(head);

    return 0;
}