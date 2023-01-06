#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n) {
    
    int j, item;

    for (int i = 0; i < n; i++) {
        // assign item in a[i]
        item = a[i];

        // search for the item perfect index
        j = i - 1;
        while(j >= 0 && a[j] > item) {
            // swap item
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = item;
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];    
    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}