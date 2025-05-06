#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int q[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Error: Queue overflow!" << endl;
    } else {
        if (front == -1) front = 0;
        q[++rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Error: Queue underflow!" << endl;
        return -1;
    } else {
        return q[front++];
    }
}

void printQueue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue elements (front to rear): ";
    for (int i = front; i <= rear; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main() {
    int value, number;

    while (1) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\n";
        cout << "Enter number: ";
        cin >> number;

        switch (number) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1) {
                    cout << "Dequeued value: " << value << endl;
                }
                break;

            case 3:
                printQueue();
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid number" << endl;
        }
    }

    return 0;
}
