#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v({1, 2, 4, 4, 5, 5, 6});

    int x = 4;

    auto it = lower_bound(v.begin(), v.end(), x); // first one > x
    // O(n)
    
    cout << (it - v.begin()) << '\n';

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, May 22, 2023 | 12:01:55 (UTC +06:00) Dhaka
*/