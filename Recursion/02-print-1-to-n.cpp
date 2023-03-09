#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

void printN(int n) {

    if (n == 0)
        return;
    
    printN(n - 1);
    cout << n << ed;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    printN(n);
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
