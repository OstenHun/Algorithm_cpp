#include <iostream>

using namespace std;

int n;
int arr[50];

void Absolute(int *x) {
    for (int i = 0; i < n; i++) {
        if (*x < 0) *x = -*x;
        x++;
    }
    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Absolute(arr);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}