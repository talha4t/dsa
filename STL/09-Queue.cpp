#include <bits/stdc++.h>
using namespace std;

int main() {

    // In queue first in first out a.k.a FIFO
    queue<int> q;
    
    q.push(1); // O(1)
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // Size
    cout << q.size() << '\n';

    // first element
    cout << q.front() << '\n';

    // remove first element
    q.pop();

    // Now first element is 2
    cout << q.front() << '\n';

    // Print Queue
    while(!q.empty()) {
        cout << q.front() << '\n';

        q.pop();
    }
    
    return 0;
}
