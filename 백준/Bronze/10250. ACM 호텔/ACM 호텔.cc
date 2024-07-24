#include <bits/stdc++.h>
using namespace std;

int t;
int h, w, n;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        int room = 1, floor = 0;
        while (true) {
            if (n > h) {
                n -= h;
                room ++;
            } else {
                floor = n;
                break;
            }
        }
        if (room < 10)
            cout << floor << '0' << room << '\n';
        else 
            cout << floor << room << '\n';
    }
}