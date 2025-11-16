#include <iostream>
using namespace std;

long long turn;
long long r, c;
long long m, n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> m >> n;

    
    if (m > n) 
        turn = 2 * (n - 1) + 1;
    else 
        turn = 2 * (m - 1);


    if (m==n) {
        if (n % 2 == 0) {
            r = n/2+1;
            c = n/2;
        } else {
            r = n/2+1;
            c = n/2+1;
        }
    } else if (m > n) {
        if (n % 2 ==0) {
            r = n/2+1;
            c = n/2;
        } else {
            r = m-n/2;
            c = n/2+1;
        }
    } else {
        if (m % 2 ==0) {
            r = m/2+1;
            c = m/2;
        } else {
            r = m/2+1;
            c = n-m/2;
        }
    }

    cout << turn << '\n';
    cout << r << ' ' << c << '\n';

    return 0;
}