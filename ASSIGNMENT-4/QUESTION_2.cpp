#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, capacity, count;

public:
    CircularQueue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        front = (front + 1) % capacity;
        count--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        int i = front;
        int c = count;
        while (c--) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.display();
    cout << "Front element: " << cq.peek() << endl;
    cq.dequeue();
    cq.display();
    return 0;
}


