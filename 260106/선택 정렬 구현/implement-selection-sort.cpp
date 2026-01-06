#include <iostream>
#include <vector>

using namespace std;

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min_num = arr[i];
        int idx = i;
        for (int j = i; j < size; j++) {
            if (arr[j] < min_num) {
                min_num = arr[j];
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
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