#include <bits/stdc++.h>
using namespace std;



void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int value = a[i];
        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = value;
    }
}

int main() {
    int a[15] = {3, 7, 1, 2, 3, 5, 5, 1, 7, 8};
    insertionSort(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i];
    }
}