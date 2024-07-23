#include <bits/stdc++.h>
using namespace std;

int t, n, d, cnt;
double v, f, c;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> d;
        for (int i = 0; i < n; i++) {
            cin >> v >> f >> c;
            double time = f / c;
            if (d <= v * time) 
                cnt++;
        }
        cout << cnt << '\n';    
        cnt = 0;
    }
}