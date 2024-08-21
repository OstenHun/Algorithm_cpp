#include <bits/stdc++.h>
using namespace std;

int lamda;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> lamda;
    
    if (620 <= lamda && lamda <= 780) {
        cout << "Red";
    } else if (590 <= lamda && lamda < 620) {
        cout << "Orange";
    } else if (570 <= lamda && lamda < 590) {
        cout << "Yellow";
    } else if (495 <= lamda && lamda < 570) {
        cout << "Green";
    } else if (450 <= lamda && lamda < 495) {
        cout << "Blue";
    } else if (425 <= lamda && lamda < 450) {
        cout << "Indigo";
    } else
        cout << "Violet";
}