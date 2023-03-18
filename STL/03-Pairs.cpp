#include <bits/stdc++.h>
using namespace std;

int main() {

    // you can store two type of variables
    pair<int, string> p;

    // put value
    p = make_pair(2, "talha");
    // printing value

    cout << p.first << '\n'; // p.first "first" for first value
    cout << p.second << '\n'; // p.second "second" for second value

    // another way to initialized pair value
    p = {3, "mahmud"};
    cout << p.first << ' ' << p.second << '\n';

    // copy value in new pair
    pair<int, string> p1 = p;
    p1.first = 5;

    cout << p.first << '\n';

    // copy value by reference
    pair<int, string> &p2 = p; // just use &
    p2.first = 5;

    cout << p.first << '\n';
    
    // taking input 
    pair<int, string>pr;
    cin >> pr.first >> pr.second;
    // pairs with array
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};

    // print
    for (int i = 0; i < 3; i++)
        cout << p_arr[i].first << ' ' << p_arr[i].second << '\n';


    // min value and max value

    pair<int, int> a, b;

    a = {1, 2};
    b = {-1, -2};

    pair<int, int> x = min(a, b);
    pair<int, int> y = max(a, b);

    cout << x.first << ' ' << x.second << '\n';
    cout << y.first << ' ' << y.second << '\n';

    // pair of vector

    vector<pair<int, int>> v;

    v.push_back({6, 5});
    v.push_back({2, 3});
    v.push_back({4, 5});
    v.push_back({6, 1});
    v.push_back({1, 9});

    sort(v.begin(), v.end());

    for (auto u : v)
        cout << u.first << ' ' << u.second << '\n';


    return 0;   
}