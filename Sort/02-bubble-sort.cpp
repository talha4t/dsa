#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int num[], int n) {


    // 2 3 4 5
    // 0 1 2 3
    // 2 3 4 5 (sorted)
    for (int i = 0; i < n; i++) { // i = 0
        for (int j = 0; j < n - i - 1; j++) {  // j 0 -> 2
            if (num[j] > num[j + 1]) { // j = 0
                int temp = num[j]; // temp = 5
                num[j] = num[j + 1]; // 
                num[j + 1] = temp;
            }
        }
    }
}

int main() {

    int n;
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    bubble_sort(num, n);
    
    for (int i = 0; i < n; i++)
        cout << num[i] << ' ';

    cout << '\n';

    return 0;
}
