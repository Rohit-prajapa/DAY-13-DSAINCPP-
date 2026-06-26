#include <iostream>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Print Linked List
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Count Nodes
int count(Node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// Sum
int sum(Node* head) {
    int s = 0;
    while (head != NULL) {
        s += head->data;
        head = head->next;
    }
    return s;
}

// Product
int product(Node* head) {
    int p = 1;
    while (head != NULL) {
        p *= head->data;
        head = head->next;
    }
    return p;
}

// Maximum
int maxElement(Node* head) {
    int mx = INT_MIN;
    while (head != NULL) {
        if (head->data > mx)
            mx = head->data;
        head = head->next;
    }
    return mx;
}

// Minimum
int minElement(Node* head) {
    int mn = INT_MAX;
    while (head != NULL) {
        if (head->data < mn)
            mn = head->data;
        head = head->next;
    }
    return mn;
}

// Search
bool search(Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

// Insert at First
void insertAtFirst(Node* &head, int data) {
    Node* t = new Node(data);
    t->next = head;
    head = t;
}

// Insert at Position
void insertAtMiddle(Node* &head, int pos, int data) {

    if (pos <= 1) {
        insertAtFirst(head, data);
        return;
    }

    Node* p = head;

    for (int i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL) {
        cout << "Invalid Position!" << endl;
        return;
    }

    Node* t = new Node(data);

    t->next = p->next;
    p->next = t;
}

// Check Sorted
bool isSorted(Node* head) {

    int prev = INT_MIN;

    while (head != NULL) {
        if (head->data < prev)
            return false;

        prev = head->data;
        head = head->next;
    }

    return true;
}

// Remove Adjacent Duplicates
void removeDuplicate(Node* head) {

    if (head == NULL)
        return;

    Node* p = head;
    Node* q = head->next;

    while (q != NULL) {

        if (p->data != q->data) {
            p = q;
            q = q->next;
        }
        else {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

// Reverse Linked List
void Reverse(Node* &head) {

    Node* p = head;
    Node* q = NULL;
    Node* r = NULL;

    while (p != NULL) {

        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    head = q;
}

// Merge Two Sorted Lists
Node* merge(Node* first, Node* second) {

    if (first == NULL)
        return second;

    if (second == NULL)
        return first;

    Node* third = NULL;
    Node* last = NULL;

    if (first->data < second->data) {
        third = last = first;
        first = first->next;
    }
    else {
        third = last = second;
        second = second->next;
    }

    last->next = NULL;

    while (first != NULL && second != NULL) {

        if (first->data < second->data) {
            last->next = first;
            last = first;
            first = first->next;
        }
        else {
            last->next = second;
            last = second;
            second = second->next;
        }

        last->next = NULL;
    }

    if (first != NULL)
        last->next = first;
    else
        last->next = second;

    return third;
}

bool iscycle(Node* head){
    Node* p=head;
    Node* q=head;

    while(q!=NULL && q->next!=NULL){
        p=p->next;
        q=q->next->next;
        if(p==q) return true;
    }
     return false;
}

int main() {

    // First Linked List
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(50);
    Node* seventh = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    Node* head = first;

    cout << "Linked List : ";
    print(head);

    cout << "Count = " << count(head) << endl;
    cout << "Sum = " << sum(head) << endl;
    cout << "Product = " << product(head) << endl;

    cout << "Maximum = " << maxElement(head) << endl;
    cout << "Minimum = " << minElement(head) << endl;

    if (search(head, 30))
        cout << "30 Found\n";
    else
        cout << "30 Not Found\n";

    insertAtFirst(head, 80);

    cout << "\nAfter Insert At First : ";
    print(head);

    insertAtMiddle(head, 4, 90);

    cout << "After Insert At Position 4 : ";
    print(head);

    if (isSorted(head))
        cout << "Linked List is Sorted\n";
    else
        cout << "Linked List is Not Sorted\n";

    cout << "\nAfter Removing Duplicates : ";
    removeDuplicate(head);
    print(head);

    Reverse(head);

    cout << "\nAfter Reverse : ";
    print(head);

    // ---------------- Merge Example ----------------

    Node* h1 = new Node(10);
    h1->next = new Node(20);
    h1->next->next = new Node(30);
    h1->next->next->next = new Node(40);

    Node* h2 = new Node(15);
    h2->next = new Node(25);
    h2->next->next = new Node(35);
    h2->next->next->next = new Node(45);

    cout << "\nFirst Sorted List : ";
    print(h1);

    cout << "Second Sorted List : ";
    print(h2);

    Node* merged = merge(h1, h2);

    cout << "Merged Linked List : ";
    print(merged);

   if(iscycle(head)){
    cout<<"found cycle: :";
   }
   else{
    cout<<"it is a  linear: ";
   }

    return 0;
}