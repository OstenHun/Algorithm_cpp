#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;
int elapsed_day;
int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string date[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int day2 = 0;
    int day1 = 0;
    for (int i = 1; i < m2; i++) {
        day2 += month[i];
    }
    day2+=d2;

    for (int i = 1; i < m1; i++) {
        day1 += month[i];
    }
    day1+=d1;
    elapsed_day = day2 - day1;
 
    int ans = (elapsed_day)%7;
    if (ans < 0) ans+=7;
    cout << date[ans];

    return 0;
}