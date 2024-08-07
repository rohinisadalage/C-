#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() : front(nullptr), rear(nullptr) {}
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    void enqueue(int data) {
        Node* temp = new Node(data);
        if (rear == nullptr) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        int data = temp->data;
        delete temp;
        return data;
    }
    bool isEmpty() const {
        return front == nullptr;
    }
    int getFront() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
    int getRear() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return rear->data;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "Front element is " << q.getFront() << endl;
    cout << "Rear element is " << q.getRear() << endl;
    cout << "Dequeued element is " << q.dequeue() << endl;
    cout << "Dequeued element is " << q.dequeue() << endl;
    cout << "Front element is " << q.getFront() << endl;
    cout << "Rear element is " << q.getRear() << endl;
    return 0;
}
