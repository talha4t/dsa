#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {4, 1, 5, 6, 1, 9, 10, 122};

    int element = 10;

    bool ok = false;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == element) {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}