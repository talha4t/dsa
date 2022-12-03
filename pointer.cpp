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

    double d = 1.2;
    double *p3 = &d;

    char c = 'a';
    char *p4 = &c;

    float f = 11.2;
    float *p5 = &f;

    cout << sizeof(b) << endl;

    cout << sizeof(p2) << endl; // size of int pointer 
    cout << sizeof(p3) << endl; // size of double pointer
    cout << sizeof(c) << endl; // size of character pointer 
    cout << sizeof(f) << endl; // size of float pointer


   
    return 0;
}