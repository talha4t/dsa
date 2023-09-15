#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int  lower_bound(vector<int> &v, int find) {

    int l = 0, r = (int)v.size() - 1;
    while(r - l > 1) {
        int mid = (r + l) / 2;

        if (v[mid] < find)
            l = mid + 1;
        else
            r = mid;
    }

    cout << l << ' ' << r << ' ';
    if (v[l] >= find)
        return l;
    if (v[r] >= find)
        return r;
    
    return -1;
}
bool solve() {
    
    vector<int> v = {1, 3, 4, 7, 10, 14, 19};
    
    int find = 18;

    int ans = lower_bound(v, find);

    cout << (ans != -1 ? ans : -1) << '\n';

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
    Friday, September 15, 2023 | 10:45:47 (UTC +06:00) Dhaka
*/