#include <bits/stdc++.h>
using namespace std;


int main() {
    
    // In deque we can push from both size. In front and last also
    deque<int> dq;

    dq.push_front(1); // O(1)
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout << dq.front() << ' ' << dq.back() << '\n'; // front = 3, back = 5

    dq.pop_front(); // remove front = 3

    cout << dq.front() << ' ' << dq.back() << '\n'; // front = 2, back = 5

    dq.pop_back(); // remove back = 5

    cout << dq.front() << ' ' << dq.back() << '\n'; // front = 2, back = 4

    return 0;
}
