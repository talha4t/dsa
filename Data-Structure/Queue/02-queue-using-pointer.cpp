#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

class Queue {
    public:
        Node *front;
        Node *back;

        int length;

        Queue() {
            front = NULL;
            back = NULL;
            length = 0;
        }

        bool is_empty() {
            if (length == 0)
                return true;
            else 
                return false;
        }

        void push(int x) {
            Node *newNode = (Node *) malloc(sizeof(struct Node));

            newNode -> data = x;
            newNode -> next = NULL;

            if (is_empty()) {
                front = newNode;
                back = newNode;
            } 
            else {
                back -> next = newNode;
                back = newNode;
            }

            length++;

            return;
        }

        void pop() {
            if (is_empty()) {
                cout << "The Queue is Empty." << '\n';
                return;
            }

            front = front -> next;

            length--;

            return;
        }

        int Front() {
            if (is_empty()) {
                cout << "The Queue is Empty." << '\n';
                return -1;
            }

            return front -> data;
        }

        int Back() {
            if (is_empty()) {
                cout << "The Queue is Empty." << '\n';
                return -1;
            }

            return back -> data;
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

    // back element
    cout << q.Back() << '\n';  //     :  25

    q.pop(); //        :  10 41 25 -> now front is 41 
    q.pop(); //        :  25

    cout << q.Front() << '\n'; //     :   25

    cout << q.size() << '\n';
    return 0;
}