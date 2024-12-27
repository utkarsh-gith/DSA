#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

class Queue {
public:
    int size;
    int frontIndex = -1;
    int rearIndex = -1;
    int *arr;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
    }

    void push(int ele) {
        if (rearIndex == size - 1) {
            cout << endl << "Queue is full" << endl;
        } else {
            if (frontIndex == -1) {
                frontIndex = 0;
            }
            arr[++rearIndex] = ele;
        }
    }

    void pop() {
        if (frontIndex == -1 || frontIndex > rearIndex) {
            cout << endl << "Queue is empty" << endl;
        } else {
            frontIndex++;
            if (frontIndex > rearIndex) {
                frontIndex = -1;
                rearIndex = -1;
            }
        }
    }

    void display() {
        if (frontIndex == -1 || frontIndex > rearIndex) {
            cout << endl << "Queue is empty" << endl;
        } else {
            cout << endl << "Queue elements: ";
            for (int i = frontIndex; i <= rearIndex; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    int front() {
        if (frontIndex == -1 || frontIndex > rearIndex) {
            cout << endl << "Queue is empty" << endl;
            return INT_MIN;
        } else {
            return arr[frontIndex];
        }
    }

    int rear() {
        if (rearIndex == -1) {
            cout << endl << "Queue is empty" << endl;
            return INT_MIN;
        } else {
            return arr[rearIndex];
        }
    }

    bool isEmpty() {
        return (frontIndex == -1);
    }
};

int main() {
    cout << endl << "Enter queue size: ";
    int n;
    cin >> n;

    Queue q(n);

    while (1) {
        int ch, ele;
        cout << endl << "Choices: 1.Push 2.Pop 3.Front 4.Rear 5.Print 6.Check Empty 7.Exit" << endl;
        cout << "Enter Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << endl << "Enter element to be pushed: ";
                cin >> ele;
                q.push(ele);
                break;
            case 2:
                q.pop();
                break;
            case 3:
                ele = q.front();
                if (ele != INT_MIN) {
                    cout << endl << "Front element: " << ele << endl;
                }
                break;
            case 4:
                ele = q.rear();
                if (ele != INT_MIN) {
                    cout << endl << "Rear element: " << ele << endl;
                }
                break;
            case 5:
                q.display();
                break;
            case 6:
                if (q.isEmpty())
                    cout << "Queue is empty" << endl;
                else
                    cout << "Queue is not empty" << endl;
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Option" << endl;
        }
    }

    return 0;
}