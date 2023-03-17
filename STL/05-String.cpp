#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "Talha";

    s.clear(); // This function clear the string

    cout << "Print 1 is the string is empty otherwise 0";
    cout << s.empty();

    // print 1 is the string is empty otherwise 0

    // iterator

    string a = "Talha is a normie boy";

    string::iterator it;
    cout << "Print it with iterator\n";
    for (it = a.begin(); it != a.end(); it++)
        cout << *it;

    cout << '\n';

    // auto or foreach loop

    cout << "Print it with foreach loop\n";
    for (auto u : s)
        cout << u;
    
    cout << '\n';

    // Reverse
    string b = "apple";

    reverse(b.begin(), b.end()); // O(n)

    cout << "Print reverse\n";
    cout << b << '\n';
    cout << '\n';

    // take input with spaces using getline
    // use "cin.ignore();" when you are taking input with test cases

    cout << "Input a sentence\n";
    string c;
    getline(cin, c);

    cout << c << '\n';

    cout << '\n';

    // unique

    string d = "deacbAAA";

    sort(d.begin(), d.end());
    int _size = unique(d.begin(), d.end()) - d.end();

    for (int i = 0; i < _size; i++)
        cout << d[i];

    cout << '\n';
    cout << '\n';
    // max and min
    cout << "Max and min element print\n";
    cout << *max_element(d.begin(), d.end()) << '\n';  
    cout << *min_element(d.begin(), d.end()) << '\n';

    cout << '\n';
    // erase or remove character

    d.erase(d.begin());

    cout << "Removed first element\n";
    cout << d << '\n';

    cout << '\n';
    d.erase(d.end() - 1);

    cout << "Removed last element\n";
    cout << d << '\n';    
}