#include <iostream>

using namespace std;

int N;

void print(int n) {
    for (int i = 0; i < n; i++) {
        cout << "12345^&*()_" << '\n';
    }
}

int main() {
    cin >> N;

    print(N);

    return 0;
}