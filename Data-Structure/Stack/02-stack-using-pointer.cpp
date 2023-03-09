#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

class Stack {
    public:
        Node *Top;

        Stack() {
            Top = NULL;
        }

        bool is_empty() {
            if (Top == NULL) {
                return true;
            }
            else {
                return false;
            }
        }

        void push(int x) {
            struct Node *newNode = (Node *) malloc(sizeof(struct Node));

            newNode -> data = x;
            newNode -> next = Top;

            Top = newNode;

            return;
        }

        void pop() {
            if(is_empty()) {
                return;
            }

            Top = Top -> next;

            return;
        }
        int top() {
            if (is_empty()) {
                cout << "The Stack is Empty now." << '\n';

                return -1;
            }
            else {
                return Top -> data;
            }
        }

};
int main() {

    Stack s;

    s.push(85); //     :  85 -> top is 85
    s.push(99); //     :  85 99 -> now top is 99
    s.push(71); //     :  85 99 71 -> now top is 71

    cout << s.top() << '\n'; //     :  71

    s.pop(); //        :  85 99 -> now top is 99
    s.pop(); //        :  85 top is 85

    cout << s.top() << '\n'; //     :   85

    return 0;
}