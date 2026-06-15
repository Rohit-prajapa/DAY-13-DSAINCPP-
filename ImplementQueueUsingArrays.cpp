#include<iostream>
using namespace std;
class Queue {
    int arr[100];
    int front, rear;

    public:
     Queue() {
        front = 0;
        rear = -1;
    }
       // Enqueue
    void enqueue(int data) {
        if (rear == 99) {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = data;
        cout << data << " inserted" << endl;
    }
      // Dequeue
    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Deleted: " << arr[front] << endl;
        front++;
    }

     // Peek
    void peek() {
        if (front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Front Element: " << arr[front] << endl;
    }
     // Display
    void display() {
        if (front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    q.peek();
}