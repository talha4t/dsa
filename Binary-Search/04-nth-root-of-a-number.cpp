#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

double eps = 1e-6;

double multiply(double mid, int n) {
    double ans = 1;

    for (int i = 1; i <= n; i++)
        ans *= mid;

    return ans;
}

bool solve() {
    
    double x = 729;
    int n = 3;

    double l = 1, r = x;

    // time complexity : n * log2(N * (10 ^ d)) ; d = number of decimal places we want accuracy
    while(r - l > eps) {
        double mid = (r + l) / 2;

        if (multiply(mid, n) < x)
            l = mid;
        else
            r = mid;
    }

    // l and r both are ans
    cout << r << '\n';

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
    Friday, September 15, 2023 | 17:24:33 (UTC +06:00) Dhaka
*/