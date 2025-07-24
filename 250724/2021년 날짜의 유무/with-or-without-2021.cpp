#include <iostream>

using namespace std;

int M, D;

bool IsIn(int m, int d) {
    if (m == 2) {
        if (0 <= d && d <= 28) return true;
    }

    else if (m==4 || m==6 || m==9 || m==11) {
        if (0 <= d && d <= 30) return true;
    }

    else if (1 <= m && m <= 12) {
        if (0 <= d && d <= 31) return true;
    }

    return false;
}

int main() {
    cin >> M >> D;

    if (IsIn(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}