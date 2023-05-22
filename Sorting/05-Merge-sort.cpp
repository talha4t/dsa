#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 10;
int a[mx], b[mx];

void merge_sort(int l, int r) {

    if (l >= r)
        return;
    
    int mid = (l + r) / 2;

    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    int LS = l, RS = mid + 1;

    for (int i = l; i <= r; i++) {

        if (LS > mid) {
            b[i] = a[RS];
            RS++;
        }
        else if (RS > r) {
            b[i] = a[LS];
            LS++;
        }
        else if (a[LS] <= a[RS]) {
            b[i] = a[LS];
            LS++;
        }
        else {
            b[i] = a[RS];
            RS++;
        }
    }

    for (int i = l; i <= r; i++)
        a[i] = b[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;

    int x;
    while(cin >> x) {
        a[++n] = x;
    }
    
    merge_sort(1, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    
    cout << '\n';

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, May 22, 2023 | 08:46:20 (UTC +06:00) Dhaka
*/