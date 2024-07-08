#include <bits/stdc++.h>
using namespace std;

int ret;
int main() {
    int nm[10];
    for (int i = 0; i < 10; i++) {
        cin >> nm[i];
    }
    
    int rem[42] = {0, };
    for (int j = 0; j < 10; j++) {
        if (rem[nm[j] % 42] == 0) {
            ret += 1;
            rem[nm[j] % 42] += 1;
        }
    }
    cout << ret;
}