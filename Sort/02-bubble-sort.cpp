#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int num[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
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
