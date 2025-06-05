#include <iostream>
#include <algorithm>
using namespace std;

void lcm(int x, int y) {
    int mx = max(x, y);
    while (mx%x!=0 || mx%y!=0) mx++;

    cout << mx;
}
int n, m;

int main() {
    cin >> n >> m;

    lcm(n, m);

    return 0;
}