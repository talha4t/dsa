#include <stdio.h>

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
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}