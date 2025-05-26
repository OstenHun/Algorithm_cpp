#include <iostream>
#include <string>
using namespace std;

int main() {
    string mat[10];

    for (int i = 0; i < 10; i++) {
        cin >> mat[i];
    }

    for (int i = 9; i >= 0; i--) {
        cout << mat[i] << '\n';
    }
    return 0;
}