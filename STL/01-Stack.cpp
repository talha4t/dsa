#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;

    s.push(7); //   : 7
    s.push(2); //   : 7 2
    s.push(5); //   : 7 2 5

    // stack size
    cout << s.size() << '\n';

    cout << s.top() << '\n'; //    : 5

    s.pop(); //     : 7 2

    cout << s.top() << '\n'; //    : 2

    // Checking the stack empty or not

    if (s.empty())
        cout << "Empty" << '\n';
    else
        cout << "Not Empty" << '\n';

    
    s.pop(); //     : 7

    cout << s.top() << '\n'; //    : 7
    
    s.pop(); //     : now 7 has popped and the stack is empty.

    cout << s.top() << '\n'; // nothing to print.

    return 0;
}