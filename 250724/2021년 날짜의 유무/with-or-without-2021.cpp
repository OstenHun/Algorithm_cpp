#include <iostream>

using namespace std;

int M, D;

bool IsDate(int m, int d) {
    int dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m <= 12 && 1 <= d && d <= dates[m-1]) return true;
    return false;
}

int main() {
    cin >> M >> D;

    if (IsDate(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}