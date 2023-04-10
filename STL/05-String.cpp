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

    cout << '\n';

    // string in vector
    vector<string> v;

    v.push_back("Talha"); 
    v.push_back("mahmud"); 
    v.push_back("Apple"); 
    v.push_back("discord");

    // sort(v.begin(), v.end()); // O(nlog(n))
    cout << "Print vector ---> \n";
    for (auto u : v)
        cout << u << '\n';

    cout << '\n';

    // delete specific segment of string

    string e = "talhamhamud";

    e.erase(e.begin() + 2, e.begin() + 8);

    cout << e << '\n';
    cout << '\n';

    // remove specific character from string 

    string f = "talhamahmud";

    f.erase(remove(f.begin(), f.end(), 'a'), f.end());

    cout << f << '\n';
    

    // check one string another string's substring or not 

    string g = "codeforces";  
    string h = "force";

    /* g.find(h)....inside "find()" we use which substring i want to find and
    before . we have to use where the substring exist */ 
    if (g.find(h) != -1)
        cout << "YES" << '\n';
    else 
        cout << "NO" << '\n'; 

    // next permutation

    string x = "abcd";

    // it will print second largest lexicography order. 
    bool ans = next_permutation(x.begin(), x.end());

    cout << ans << ' ' << x << '\n'; 
    
}