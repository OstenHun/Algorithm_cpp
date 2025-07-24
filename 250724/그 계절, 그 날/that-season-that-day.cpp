#include <iostream>

using namespace std;

int Y, M, D;

bool IsLeafYear(int y) {
    if (y % 4!=0) return false;
    if (y % 100 != 0) return false;
    if (y % 400 != 0) return false;

    return true;
}

bool IsDay(int y, int m, int d) {
    if (IsLeafYear(y)) {
        int dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (1 <= d && d <= dates[m-1]) return true;
        
        return false;
    }

    else {
        int dates[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (1 <= d && d <= dates[m-1]) return true;

        return false;
    }
}

void WhatWeather(int y, int m, int d) {
    if (IsDay(y, m, d)) {
        if (3 <= m && m <= 5) cout << "Spring";
        if (6 <= m && m <= 8) cout << "Summer";
        if (9 <= m && m <= 11) cout << "Fall";
        if (m <= 2 || m == 12) cout << "Winter";
    }

    else cout << -1;
}

int main() {
    cin >> Y >> M >> D;

    WhatWeather(Y, M, D);

    return 0;
}