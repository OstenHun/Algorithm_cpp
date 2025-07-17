#include <iostream>

using namespace std;

int a, b;

bool IsOn(int x) {
    if (x % 2 == 0) return false;
    if (x % 10 == 5) return false;
    if (x % 3 == 0 && x % 9 != 0) return false;
    return true; 
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (IsOn(i)) cnt++; 
    }
    
    cout << cnt;

    return 0;
}