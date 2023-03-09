#include <bits/stdc++.h>
using  namespace std;

class Stack {
    public:
        int arr[100007];
        int Top;
        int _size;

        Stack() {
            Top = -1;
            _size = 0;
        }

        bool is_empty() {
            if (Top == -1) {
                return true;
            }
            else {
                return false;
            }
        }

        // insert element
        void push(int x) {
            Top++;

            arr[Top] = x;

            _size++;

            return;
        }

        // delete element
        void pop() {
            if (is_empty()) {
                cout << "The stack is Empty now." << '\n';
                return;
            }

            Top--;
            
            _size--;
            return;
        }

        // print stack's value
        int top() {
            if (is_empty()) {
                cout << "The Stack is Currently Empty" << '\n';
                return -1;
            }
            else {
                return arr[Top];
            }
        }

        int size() {
            return _size;
        }
};

int main() {

    Stack s;

    s.push(10); //     :  10 -> top is 10
    s.push(41); //     :  10 41 -> now top is 41
    s.push(25); //     :  10 41 25 -> now top is 25

    cout << s.top() << '\n'; //     :  25

    s.pop(); //        :  10 41 -> now top is 41
    s.pop(); //        :  10 top is 10

    cout << s.top() << '\n'; //     :   10

    cout << s.size() << '\n';
    
    return 0;
}