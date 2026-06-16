#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at Beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;

        cout << "Node Inserted At Beginning Successfully!" << endl;
    }

    // Insert at End
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << "Node Inserted At End Successfully!" << endl;
    }

    // Insert at Middle (Position)
    void insertAtPosition(int value, int pos) {
        Node* newNode = new Node(value);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            cout << "Node Inserted Successfully!" << endl;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position!" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Node Inserted At Position "
             << pos << " Successfully!" << endl;
    }

    // Delete Node
    void deleteNode(int value) {

        if (head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;

            cout << "Node Deleted Successfully!" << endl;
            return;
        }

        Node* current = head;

        while (current->next != NULL &&
               current->next->data != value) {
            current = current->next;
        }

        if (current->next == NULL) {
            cout << "Element Not Found!" << endl;
            return;
        }

        Node* temp = current->next;
        current->next = current->next->next;

        delete temp;

        cout << "Node Deleted Successfully!" << endl;
    }

    // Search Node
    void search(int value) {

        Node* temp = head;
        int pos = 1;

        while (temp != NULL) {

            if (temp->data == value) {
                cout << "Element Found At Position "
                     << pos << endl;
                return;
            }

            temp = temp->next;
            pos++;
        }

        cout << "Element Not Found!" << endl;
    }

    // Display List
    void display() {

        if (head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }

        Node* temp = head;

        cout << "Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList list;

    int choice, value, pos;
    char ch;

    do {

        cout << "\n===== LINKED LIST MENU =====" << endl;
        cout << "1. Insert At Beginning" << endl;
        cout << "2. Insert At Middle" << endl;
        cout << "3. Insert At End" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Search Node" << endl;
        cout << "6. Display List" << endl;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter Value: ";
            cin >> value;

            cout << "Enter Position: ";
            cin >> pos;

            list.insertAtPosition(value, pos);
            break;

        case 3:
            cout << "Enter Value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 4:
            cout << "Enter Value To Delete: ";
            cin >> value;
            list.deleteNode(value);
            break;

        case 5:
            cout << "Enter Value To Search: ";
            cin >> value;
            list.search(value);
            break;

        case 6:
            list.display();
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

        cout << "\nDo You Want To Continue? (Y/N): ";
        cin >> ch;

    } while (ch == 'Y' || ch == 'y');

    cout << "\nProgram Terminated Successfully!" << endl;

    return 0;
}