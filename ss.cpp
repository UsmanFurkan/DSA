#include <bits/stdc++.h>
#define MAX 10
using namespace std;



int binarySt[MAX];
int top = -1;


void push(int value) {
    if (top < MAX - 1) {
        binarySt[++top] = value;
    } else {
        cout << "Stack overflow!" << endl;
    }
}


int pop() {
    if (top >= 0) {
        return binarySt[top--];
    } else {
        cout << "Stack underflow!" << endl;
        return -1;
    }
}

int main() {
    int n;

    cin >> n;

    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }


    while (n > 0) {
        push(n % 2);
        n = n / 2;
    }

    while (top >= 0) {
        cout << pop();
    }

    cout << endl;
    return 0;
}
