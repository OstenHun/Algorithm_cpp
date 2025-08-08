#include <iostream>

using namespace std;

int a, b, c;
int elapsed_min = 0;

int main() {
    cin >> a >> b >> c;

    int day = 11;
    int hour = 11;
    int min = 11;

    if (a == 11 && b<=11 && c<11) {
        elapsed_min = -1;
    }

    else {
        while (1) {
            if (day==a && hour == b && min == c) 
                break;
            
            elapsed_min++;
            min++;

            if (min == 60) {
                hour++;
                min = 0;
            }

            if (hour == 24) {
                day++;
                hour = 0;
            }
        }
    }

    cout << elapsed_min;

    return 0;
}