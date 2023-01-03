#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
        int arr[100007];
        int front, back, length;

        Queue() {
            front = 0;
            back = -1;
            length = 0;
        }

        bool is_empty() {
            if (length == 0) 
                return true;
            else 
                return false;
        }

        void push(int x) {
            back++;
            arr[back] = x;
            length++;
            return;
        }

        void pop() {
            if (is_empty()) {
                cout << "The Queue is Empty." << '\n';
                return;
            }
            front++;
            length--;
        }

        int Front() {
            if (is_empty()) {
                cout << "The Queue is Empty." << '\n';
                return - 1;
            }
            return arr[front];
        }

        int size() {
            return length;
        }
};

int main() {

    Queue q;

    q.push(10); //     :  10 -> front is 10
    q.push(41); //     :  10 41 -> now front is 10
    q.push(25); //     :  10 41 25 -> now front is 10

    cout << q.Front() << '\n'; //     :  10

    q.pop(); //        :  10 41 25 -> now front is 41 
    q.pop(); //        :  25

    cout << q.Front() << '\n'; //     :   25
    cout << q.size() << '\n';


    return 0;
}