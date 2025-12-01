#include <iostream>
#include <cstdlib>
using namespace std;

int n;
int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    cin >> a >> b >> c;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (abs(a-i)<=2 || abs(b-j)<=2 || abs(c-k)<=2) 
                    cnt++;
            }
        }
    }

    cout << cnt;
    
    return 0;
}