#include <iostream>
#include <algorithm>
using namespace std;

int x, y;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> x >> y;

    int mx = 0;

    for (int i = x; i <= y; i++) {
        int k = i;
        int sum = 0;
        while(k>0) {
            sum+=k%10;
            k/=10;
        }
        mx = max(mx, sum);
    }

    cout << mx;

    return 0;
}