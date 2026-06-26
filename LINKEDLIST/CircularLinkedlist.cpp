#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node* Head = NULL;

void display(Node* head){
    if(head == NULL)
        return;

    Node* p = head;

    do{
        cout << p->data << " ";
        p = p->next;
    }while(p != head);

    cout << endl;
}

// Recursive Display
void Rdisplay(Node* p){
    static int flag = 0;

    if(p != Head || flag == 0){
        flag = 1;
        cout << p->data << " ";
        Rdisplay(p->next);
    }

    flag = 0;
}

void insert( int pos, int x){
    Node* t;
    Node* p;
    if(pos==0){
        t=new Node(x);
        t->data=x;

        if(Head==NULL){
        Head=t;
        Head->next=Head;
    }
    else{
        p=Head;
        while(p->next!=Head){
            p=p->next;
        }
        p->next=t;
        t->next=Head;
        Head=t;
    }
}
   else{
    p=Head;
    for(int i=0; i<pos-1; i++){
        p=p->next;
    }
        t=new Node(x);
        t->next=p->next;
        p->next=t;
    
    }
}

int Delete(int pos){
    Node *p,*q;
    int x;
    if(pos==1){
        p=Head;
        while(p->next!=Head){
            p=p->next;
        }
        x=Head->data;
        if(p==Head){
            delete Head;
            Head=NULL;
        }
        else{
            p->next=Head->next;
            delete Head;
            Head=p->next;
        }
    }
    else{
        p=Head;

        for(int i=0; i<pos-2; i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
    }
    return x;
}

int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node* head = a;

    Head = head;   

    cout << "Iterative Display: ";
    display(head);

    cout << "Recursive Display: ";
    Rdisplay(head);

    cout<<endl;

    insert(4,90);

    display(head);

    cout<<endl;

    cout<<Delete(4)<<" ";
    cout<<endl;
    display(head);
    
    return 0;
}