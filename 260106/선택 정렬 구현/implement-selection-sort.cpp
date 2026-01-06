#include <iostream>

using namespace std;

void selection_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_num = arr[i];
        for (int j = i; j < size - 1; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int n;
int arr[100];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}