#include <bits/stdc++.h>
using namespace std;

int main() {

    // Priority Queue show largest value of its list
    // Complexity log2(n)
    priority_queue<int> q;

    q.push(1);    
    q.push(2);    
    q.push(3);    
    q.push(4);    
    q.push(5);

    cout << q.top() << '\n'; // 5

    q.pop(); // remove 5

    cout << q.top() << '\n'; // 4

    // print all element

    while(!q.empty()) {
        cout << q.top() << '\n';
        q.pop();
    }

    // print the size of priority queue
    cout << q.size() << '\n';

    // If I want to small to large 

    priority_queue<int, vector<int>, greater<int>> qq;

    qq.push(1);
    qq.push(2);
    qq.push(3);
    qq.push(4);
    qq.push(5);

    while(!qq.empty()) {
        cout << qq.top() << '\n';
        qq.pop();
    }

    return 0;
}
