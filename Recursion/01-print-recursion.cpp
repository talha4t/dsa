#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

void printR(int n) {

    if (n == 0)
        return;
    
    cout << "I love Recursion" << ed;
    printR(n - 1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    printR(n);
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
