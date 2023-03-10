#include <bits/stdc++.h>
using namespace std;

int main() {

    // initialized vector 
    vector <int> v;
    
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;

        v.push_back(x); // taking input
    }

    cout << "v1 size = " << v.size() << '\n'; // to get vector size

    // print vector 
    for (int i = 0; i < v.size(); i++)
        cout << "v = " << v[i] << ' ';

    cout << '\n';
    v = {1, 2, 3, 4}; // we can declare this way also

    v.clear(); // its clear all the element.
    cout << "Is empty = " << v.empty() << '\n'; // if the vector is empty it will return 1 otherwise 0


    // Use resize

    vector<int> v1;

    v1.resize(10); // now its size is 10 first four index fill with element and rest of are fill with zeros

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    
    cout << "v1 size = " << v1.size() << '\n'; // its size is 10 cuz we declared it resize 10

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << ' ';

    cout << '\n';


    // Delcare vector
    vector<int>v2(10); //we can declare it similar array
     
    v2.push_back(7); // 7 push in 11th position
    
    cout << "first 10 element is zero and then we push back 7. Now 7 is in 11th position" << '\n';
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << ' ';

    cout << '\n';
    // push default value

    // here 10 is the size of the vector and 5 is the element of all postion's aka 1 to 10
    vector<int>v3(10, 5);

    cout << "print 10 element which fill with 5" << '\n';
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << ' ';

    cout << '\n';
    // copy vector 
    vector<int> v4;
    v4.push_back(7);
    v4.push_back(6);

    vector<int> v5 = v4;

    for (int i = 0; i < v5.size(); i++)
        cout << v5[i] << ' ';

    cout << '\n';
    
    // Iterator

    vector<int> v6 = {1, 2, 3, 4, 5, 6};

    vector<int>::iterator it;

    cout << "print v6 with iterator" << '\n';
    for (it = v6.begin(); it != v6.end(); it++)
        cout << *it << ' ';

    cout << '\n';


    //for each loop

    vector<int> v7 = {5, 6, 7, 8, 9, 10};

    cout << "print v7 with foreach loop" << '\n';
    for (int u : v7)
        cout << u << ' ';
    
    cout << '\n';

    // for each loop with auto

    vector<int> v8 = {1, 2, 3, 4};
    
    cout << "print v8 with auto" << '\n';
    for (auto u : v8)
        cout << u << ' '; // auto will detect which type the variable is

    cout << '\n';

    // sort

    vector<int> v9 = {5, 1, 6, 2, 10};
    sort(v9.begin(), v9.end()); // sort func complexity is O(nlog2(n))

    cout << "print sorted vector" << '\n';
    for (auto u : v9)
        cout << u << ' ';
    
    cout << '\n';

    sort(v9.rbegin(), v9.rend()); // reverse sorted
    for (auto u : v9)
        cout << u << ' ';

    cout << '\n';

    v9 = {4, 1, 5, 10, 12};
    reverse(v9.begin(), v9.end()); // reverse the entire vector
    cout << "reverse the vector" << '\n';
    for (auto u : v9)
        cout << u << ' ';

    cout << '\n';

    // partial sort
    vector<int> v10 = {8, 10, 2, 5, 3, 11, 4};
    sort(v10.begin() + 1, v10.begin() + 4); // sort position 2 to position 4

    cout << "partial sum" << '\n';
    for (auto u : v10)
        cout << u << ' ';
    
    cout << '\n';

    // vector with stack

    vector<int> v11 = {2, 3, 4, 5};

    cout << "access last element with v11.back() = " << v11.back() << '\n';

    v11.pop_back(); // complexity O(1)
    // remove element from last

    cout << "print first element with pointer = " << *v11.begin() << '\n';

    v.erase(v11.begin()); // complexity O(n)
    // erase element from first

    cout << "remove first element with v11.erase(pointer) = " << v11[0] << '\n';
    // when we use erase function its shifted all index by one index.

    
    return 0;
}