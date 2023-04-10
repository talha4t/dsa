#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // multiset maintain sorted not unique
    multiset<int> s;

    s.insert(1); // O(log2(n))
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);

    cout << s.size() << '\n';

    for (auto u : s)
        cout << u << ' ';

    cout << '\n';

    // count any element
    cout << "Count 1 " << s.count(1) << '\n'; // O(log2(n))

    // delete element 
    s.erase(1);
    for (auto u : s)
        cout << u << '\n';

    cout << '\n';

    // find() function return the first element pointer
    auto it = s.find(4);

    // now we are removing this element with pointer
    s.erase(it);

    for (auto u : s)
        cout << u << ' ';

    cout << '\n';

    return 0;
}
