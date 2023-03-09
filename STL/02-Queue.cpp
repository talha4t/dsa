#include <bits/stdc++.h>
using namespace std;

int main() {
    
    queue<int> q;

    q.push(10); //      : 10
    q.push(2); //       : 10 2
    q.push(48); //      : 10 2 48

    cout << q.front() << '\n'; //   : 10

    cout << q.size() << '\n'; //    : 3

    q.pop(); //         : 2 48
    q.pop(); //         : 48

    cout << q.front() << '\n'; //   : 48

    cout << q.size() << '\n'; //    : 1

    return 0;
}