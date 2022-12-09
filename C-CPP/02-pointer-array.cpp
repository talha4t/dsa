#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[10];

    cout << "address of first memory block is = " << &a[0] << endl;

    // Printing 0 -> 9 address of this array
    // for (int i = 0; i < 10; i++)
    //     cout << &a[i] << " "; 

    cout << *a << endl;
    return 0;
}