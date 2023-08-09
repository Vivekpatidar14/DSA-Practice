#include<iostream>
using namespace std;

void sort(int arr[], int n, int start) {
    if (start >= n - 1 || n <= 1) {
        return;
    }

    int minIndex = start; // Find the index of the minimum element
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    if (minIndex != start) {
        swap(arr[start], arr[minIndex]); // Swap the minimum element with the current start element
    }

    sort(arr, n, start + 1); // Recur for the next index
}

int main() { 
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    sort(arr, n, 0);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
