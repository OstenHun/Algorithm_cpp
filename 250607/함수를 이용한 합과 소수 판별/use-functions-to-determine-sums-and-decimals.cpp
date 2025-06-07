#include <iostream>

using namespace std;

int a, b;

bool chk(int x) {
    bool chk = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            chk = false;
        }
    }

    int sum = 0;
    while (x > 0) {
        sum += x%10;
        x/=10;
    } 

    if (sum%2!=0) chk = false;

    return chk;
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (chk(i)) cnt++;
    }

    cout << cnt;
    return 0;
}