#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 10;
int a[mx];

void merge_sort(int l, int r) {

    if (l >= r)
        return;
    
    int mid = (l + r) / 2;

    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    vector<int> L, R;
    for (int i = l; i <= mid; i++)
        L.push_back(a[i]);
    for (int i = mid + 1; i <= r; i++)
        R.push_back(a[i]);
    
    int Lid = 0, Rid = 0, i = l;

    while(Lid < L.size() or Rid < R.size()) {
        if (Rid == R.size() or L[Lid] < R[Rid]) {
            a[i] = L[Lid];
            Lid++; i++;
        }
        else {
            a[i] = R[Rid];
            Rid++; i++;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    merge_sort(1, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, May 22, 2023 | 08:46:20 (UTC +06:00) Dhaka
*/