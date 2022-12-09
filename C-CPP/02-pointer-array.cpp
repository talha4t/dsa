#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "address of first memory block is = " << &a[0] << endl;

    // Printing 0 -> 9 address of this array
    for (int i = 0; i < 10; i++)
        cout << &a[i] << " "; 

    cout << *a + 1 << endl;  // Its print the 0 index value + 1
    cout << *a + 2 << endl;  // Its print the 0 index value + 2

    cout << *(a + 1) << endl; // Its gonna print next value after the zero index
    cout << *(a + 5) << endl; // Its gonna print the 6th element

    
    return 0;
}