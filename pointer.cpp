#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5;
    int *p1 = &a;
    // *ptr means value at address of ptr.

    // cout << *ptr << '\n';

    // cout << ptr << endl;
    // cout << &n << endl;
   
   
    // Size of pointer also data type 
    int b = 5;
    int *p2 = &b;

    cout << sizeof(b) << endl;
    cout << sizeof(p2) << endl;

   
    return 0;
}