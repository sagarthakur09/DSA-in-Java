#include <stdio.h>
int insert(int a[], int n, int x, int pos) {
    if (pos < 0 || pos > n) {
        return n; // Invalid position
    }
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1]; // Shift elements to the right
    }
    a[pos] = x; // Insert the new element
    return n + 1; // New size of the array
}