#include <bits/stdc++.h>
using namespace std;

void quickSort(int a[], int low, int high) {
    
    if (low >= high)
        return;

    int pivot = low + rand() % (high - low + 1);

    swap(a[pivot], a[high]);

    pivot = low;
    
    for (int i = low; i < high; i++) {
        if (a[i] < a[high])
            swap(a[i], a[pivot++]);
    }

    swap(a[pivot], a[high]);

    quickSort(a, low, pivot - 1);
    quickSort(a, pivot + 1, high);

}

int main() {

    int a[5] = {5, 4, 3, 2, 1};

    quickSort(a, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << a[i] << ' ';

    return 0;
}