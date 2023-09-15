#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    vector<int> v = {2, 3, 4, 5, 7};
    
    int find = 9;

    int l = 0, r = (int)v.size() - 1;

    while(l <= r) {
        int mid = (r + l) / 2;

        if (find == v[mid]) {
            cout << v[mid];
            break;
        }
        if (v[mid] < find)
            l = mid + 1;
        else
            r = mid;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, September 15, 2023 | 10:29:21 (UTC +06:00) Dhaka
*/