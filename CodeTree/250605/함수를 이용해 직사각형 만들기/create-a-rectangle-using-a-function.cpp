#include <iostream>

using namespace std;

int n, m;

void printRectangle(int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << 1;
        }
        cout << '\n';
    }
}

int main() {
    cin >> n >> m;

    printRectangle(n, m);

    return 0;
}