#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 10, 2, 9, 3, 6, 12, 19, 11};

    sort(v.begin(), v.end());  


    int l = 0, r = v.size() - 1, x = 12;
    while(l <= r) {
        int mid = (l + r) / 2;

        if (x == v[mid]) {
            cout << x << '\n';
            break;
        }
        if (x < v[mid]) 
            r = mid - 1;
        else if (x > v[mid])
            l = mid + 1;
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, May 21, 2023 | 21:31:41 (UTC +06:00) Dhaka
*/