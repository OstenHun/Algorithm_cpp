#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int x, int y) {
    while(y!=0) {
        int r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int lcm(int x, int y) {
    return x*y/gcd(x, y);
}

int LCM(int x) {
    if(x==1) return arr[0];

    arr[x-2] = lcm(arr[x-2], arr[x-1]);
    
    return LCM(x-1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << LCM(n);

    return 0;
}