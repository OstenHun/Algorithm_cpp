#include <iostream>

using namespace std;

int n, m;
int arr[100];

void Sum(int x, int y) {
    int sum = 0;
    for (int i = x; i <= y; i++) {
        sum+=arr[i-1];
    }

    cout << sum << '\n';
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        Sum(a1, a2);
    }

    return 0;
}