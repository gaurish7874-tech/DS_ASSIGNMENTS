
#include <iostream>
#include <queue>
using namespace std;

class SimpleQueue {
    queue<int> q;
    int capacity;

public:
    SimpleQueue(int size) : capacity(size) {}

    bool isEmpty() {
        return q.empty();
    }

    bool isFull() {
        return q.size() == capacity;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        q.push(val);
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        q.pop();
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return q.front();
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    SimpleQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    q.display();
    return 0;
}





