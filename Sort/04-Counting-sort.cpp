#include <bits/stdc++.h>
using namespace std;

const int MAX = 100 + 2;
int a[101], cnt[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
        cnt[a[i]]++;
    
    for (int i = 1; i < MAX; i++) {
        for (int j = 1; j <= cnt[i]; j++)
            cout << i << ' ';
    }

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, May 21, 2023 | 22:03:18 (UTC +06:00) Dhaka
*/