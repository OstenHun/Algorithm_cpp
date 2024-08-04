#include <bits/stdc++.h>
using namespace std;

int a[3], num;
int main() {
    for(int i = 0; i < 3; i++) {
        cin >> num;
        a[i] = num;
    }
    sort(a, a + 3);
    for (int i : a) {
        cout << i << " ";
    }
    return 0;
}