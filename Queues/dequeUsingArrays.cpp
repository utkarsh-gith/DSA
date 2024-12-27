#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;
//not complete
class Deque {
public:
    int size;
    int frontIndex;
    int rearIndex;
    int *arr;

    Deque(int size) {
        this->size = size;
        arr = new int[size];
        frontIndex = -1;
        rearIndex = -1;
    }

    void push_rear(int ele) {
        if ((rearIndex + 1) % size == frontIndex) {
            cout << endl << "Queue is full" << endl;
        } else {
            if (frontIndex == -1) {
                frontIndex = 0;
            }
            rearIndex = (rearIndex + 1) % size;
            arr[rearIndex] = ele;
        }
    }

    void push_front(int ele) {
        if ((rearIndex + 1) % size == frontIndex) {
            cout << endl << "Queue is full" << endl;
        } else {
            if (rearIndex == -1) {
                rearIndex = 0;
            }
            rearIndex = (rearIndex + 1) % size;
            arr[rearIndex] = ele;
        }
    }

    void pop() {
        if (frontIndex == -1) {
            cout << endl << "Queue is empty" << endl;
        } else {
            if(frontIndex == rearIndex){
                frontIndex = rearIndex = -1;
            }else{
                frontIndex = (frontIndex + 1) % size;
            }
            
        }
    }

    void display() {
        if (frontIndex == -1) {
            cout << endl << "Queue is empty" << endl;
        } else {
            cout << endl << "Queue elements: ";
            if(frontIndex == rearIndex){
                cout << arr[frontIndex];
            }
            else{
                for (int i = frontIndex; i != rearIndex; i = (i + 1) % size) {
                    cout << arr[i] << " ";
                }
                cout << arr[rearIndex];
            }
            cout << endl;
        }
    }

    int front() {
        if (frontIndex == -1) {
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

    Deque d(n);

    while (1) {
        int ch, ele;
        cout << endl << "Choices: 1.Push 2.Pop 3.Front 4.Rear 5.Print 6.Check Empty 7.Exit" << endl;
        cout << "Enter Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << endl << "Enter element to be pushed: ";
                cin >> ele;
                d.push(ele);
                break;
            case 2:
                d.pop();
                break;
            case 3:
                ele = d.front();
                if (ele != INT_MIN) {
                    cout << endl << "Front element: " << ele << endl;
                }
                break;
            case 4:
                ele = cq.rear();
                if (ele != INT_MIN) {
                    cout << endl << "Rear element: " << ele << endl;
                }
                break;
            case 5:
                cq.display();
                break;
            case 6:
                if (cq.isEmpty())
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