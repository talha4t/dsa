#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

ll fact(int n) {

    if (n == 1 or n == 0) 
        return 1;

    return n * fact(n - 1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    cout << fact(n) << ed;
    return 0;
}

//github.com/talha4t (Talha Mahmud)
