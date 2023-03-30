#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s = {1, 1, 3, 3, 2, 2};

    // in set all number are formed in distinct and sorted
    cout << s.size() << '\n';

    for (auto u : s)
        cout << u << ' ';

    cout << '\n';

    // iterator of set
    set<int>:: iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout <<  *it << ' ';

    cout << '\n';

    // clear of element
    s.clear();

    // insert element

    s.insert(5); // O(log2(n))
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(3);

    cout << s.size() << '\n';

    for (auto u : s)
        cout << u << ' ';

    cout << '\n';

    // count function use for the number exist or not basically
    cout << s.count(5) << '\n';

    // first element of set

    cout << *(s.begin()) << '\n';

    // last element of set

    cout << *(--s.end()) << '\n';

    // remove element 
    
    s.erase(3);

    cout << s.size() << '\n';

    for (auto u : s)
        cout << u << ' ';
    
    cout << '\n';

    // string in set
    set<string> str;

    str.insert("talha");
    str.insert("mahmud");
    str.insert("pavel");
    str.insert("hemayet");
    str.insert("talha");
    str.insert("mahmud");
    str.insert("pavel");
    str.insert("hemayet");

    cout << str.size() << '\n';
    for (auto u : str)
        cout << u << ' ';

    cout << '\n';

    // pair in set

    set<pair<int, int>> p;

    p.insert( {2, 3} );
    p.insert( {4, 1} );
    p.insert( {4, 1} );
    p.insert( {3, 1} );
    p.insert( {2, 3} );

    cout << p.size() << '\n';

    for (auto u : p)
        cout << u.first << ' ' << u.second << '\n';

    // descending order

    set<int, greater<int>> g;

    g.insert(2);
    g.insert(3);
    g.insert(2);
    g.insert(4);
    g.insert(4);

    for (auto u : g)
        cout << u << ' ';

    cout << '\n';

    // Unordered set  will unique elements but not int sorted way

    unordered_set<int> us;

    us.insert(99); // worst = O(n), average = O(1)   
    us.insert(85);   
    us.insert(550785);   
    us.insert(550799);   
    us.insert(99);  

    for (auto u : us)   
        cout << u << ' ';

    cout << '\n';
}