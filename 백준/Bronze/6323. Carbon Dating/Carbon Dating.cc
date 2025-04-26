#include <bits/stdc++.h>
using namespace std;

double w, d;
int main() {
    int cnt = 1;
    while (true) {
        cin >> w >> d;
        if (w==0&&d==0) break;
        double ratio = (810 * w) / d; // 제대로된 비율
        double date = 5730 * log(ratio) / log(2); // ln(2) 사용

        if (date > 10000) date = round(date/1000)*1000;
        else date = round(date/100)*100;
        cout << "Sample #" << cnt++ << '\n';
        cout << "The approximate age is " << fixed << setprecision(0) << date << " years." << '\n';
        cout << '\n';
    }
}