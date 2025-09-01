#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
int date[7];
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day = 0;
    for (int i = 1; i < m2; i++) {
        day += month[i];
    }
    day += d2;

    int dd = 1;
    int chk;

    int day2 = 0;
    for (int i = 1; i < m1; i++) {
        day2 += month[i];
    }
    day2 += d1;

    while (dd <= day - day2) {
        chk = dd % 7;
        date[chk]++;

        dd++;
    }

    if (A == "Mon") cout << date[0];
    if (A == "Tue") cout << date[1];
    if (A == "Wed") cout << date[2];
    if (A == "Thu") cout << date[3];
    if (A == "Fri") cout << date[4];
    if (A == "Sat") cout << date[5];
    if (A == "Sun") cout << date[6];


    return 0;
}