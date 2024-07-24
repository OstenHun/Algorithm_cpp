#include <bits/stdc++.h>
using namespace std;

int n;
int pls, sum, cnt;
int main() {
    cin >> n;
    
    if (n == 1) 
        cnt = 1;
    else if (1 < n && n <= 7) 
        cnt = 2;
    else
        cnt = 3;
        sum = 7;
        pls = 12;
        while (true) {
            sum += pls;
            pls += 6;
            if (sum >= n)
                break;
            cnt++;
        }
    
    cout << cnt;
}
