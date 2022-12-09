#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

void printNReverse(int n) {

    if (n == 0)
        return;
    
    if (n == 1)
        cout << n << ed;
    else 
        cout << n << ' ';
        
    printNReverse(n - 1);
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    printNReverse(n);

    return 0;
}

//github.com/talha4t (Talha Mahmud)
