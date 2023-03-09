#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};  

class LinkedList {
    public:
        Node *head;
        Node  *tail;
        int _size;

        LinkedList() {
            head = NULL;
            tail = NULL;
            _size = 0;
        }

        bool is_empty() {
            if (_size == 0)
                return true;
            else 
                return false;
        }

        void push_front(int x) {
            Node* newNode = (Node*) malloc(sizeof(struct Node));

            newNode -> data = x;
            newNode -> next = NULL;

            if (is_empty()) {
                head = newNode;
                tail = newNode;
            }
            else {
                newNode -> next = head;
                head = newNode;
            }

            _size++;

            return;
        }

        void push_back(int x) {
            Node* newNode = (Node*) malloc(sizeof(struct Node));
            
            newNode -> data = x;
            newNode -> next = NULL;

            if (is_empty()) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail -> next = newNode;
                tail = newNode;
            }

            _size++;
            
            return;
        }

        void push_at_certain_position(int position, int x) {
            if (position == 1) {
                push_front(x);
                return;
            }
            else if (position == _size + 1) {
                push_back(x);
                return;
            }
            else if (position > _size) {
                cout << "Error" << endl;
                return;
            }
            _size++;

            Node* newNode = (Node*) malloc(sizeof(struct Node));

            newNode -> data = x;
            newNode -> next = NULL;

            if (position == 2) {
                newNode -> next = head -> next;
                head -> next = newNode;
                return;
            }

            Node* temp;

            temp = head;


            for (int i = 1; i < position - 1; i++) {
                temp = temp -> next;
            }

            newNode -> next = temp -> next;
            temp -> next = newNode;

            return;
        }

        void pop_front() {
            if (is_empty()) {
                cout << "Error" << endl;
                return;
            }
            
            head = head -> next;

            _size--;

            return;
        }

        void pop_back() {
            Node* temp;
   
            temp = head;

            while(temp -> next -> next  != NULL) {
                temp = temp -> next;
            }

            temp -> next = NULL;
            _size--;

            tail = temp;
            
            return;
        }

        void pop_from_certain_postion(int position) {

            if (position == 1) {
                pop_front();
                return;
            }
            else if (position == _size) {
                pop_back();
                return;
            }
            else if (position > _size) {
                cout << "Error" << endl;
                return;
            }
            _size--;

            if (position == 2) {
                head -> next = head -> next -> next;
                return;
            }

            Node* temp;

            temp = head;

            for (int i = 1; i < position - 1; i++) {
                temp = temp -> next;
            }
            
            temp -> next = temp -> next -> next;

            return;
        }
        
        int Size() {
            return _size;
        }

        void printList() {
            if (is_empty()) {
                cout << "Empty " << endl;
                return;
            }

            Node* temp; 

            temp = head;

            while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
            }

            cout << endl;

            return;
        }

};

int main() {

    LinkedList l;

    l.push_back(10); // in      :10
    l.push_front(14); // in     :14 10

    l.push_back(17); // in      :14 10 17
    l.push_back(19); // in      :14 10 17 19

    l.push_at_certain_position(2, 87); // in     :14 87 10 17 19

    l.printList(); // output    :14 87 10 17 19

    l.pop_back(); // out        :14 10 87 17

    l.printList();

    l.pop_from_certain_postion(3); // out       :14 10 17

    l.printList(); // output    : 14 10 17



    
    return 0;
}
