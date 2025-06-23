#include <iostream>

using namespace std;

int n;
int arr[50];

void divide(int n, int *a) {
    for (int i = 0; i < n; i++) {
        if (*a % 2 == 0)
            *a/=2;
        cout << *a << ' ';
        *a++;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    divide(n, arr);
    return 0;
}