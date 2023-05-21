#include <bits/stdc++.h>
using namespace std;

vector<int> v = {1, 10, 2, 9, 3, 6, 12, 19, 11};

int binarySearch(int l, int r, int x) {

    if (l > r)
        return -1;
    
    int mid = (l + r) / 2;
    if (x < v[mid])
        binarySearch(l, mid - 1, x);
    else if (x > v[mid])
        binarySearch(mid + 1, r, x);
    else
        return v[mid];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sort(v.begin(), v.end());

    int x = 19, l = 0, r = v.size() - 1;

    cout << binarySearch(l, r, x) << '\n';
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, May 21, 2023 | 21:50:25 (UTC +06:00) Dhaka
*/