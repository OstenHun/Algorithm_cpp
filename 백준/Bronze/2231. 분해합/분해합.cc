#include <bits/stdc++.h>
using namespace std;

int n, ret;
int main() {
    cin>> n;

    for (int i = n; 1 <= i; i--) {
        int sum = i;
        int tmp = i;
        while (tmp > 0) {
            sum += tmp % 10 ;
            tmp /= 10;
        }
        
        if (sum == n)
            ret = i;     
    }

    cout << ret <<'\n';
    return 0;
}