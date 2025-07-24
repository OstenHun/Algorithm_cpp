#include <iostream>

using namespace std;

int M, D;

bool IsIn(int m, int d) {
    if (m == 2) {
        if (d < 0 || d > 28) return false;
    }

    if (m==4 || m==6 || m==9 || m==11) {
        if (d < 0 || d > 30) return false;
    }

    else {
        if (d < 0 || d > 31) return false;
    }

    return true;
}

int main() {
    cin >> M >> D;

    if (IsIn(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}