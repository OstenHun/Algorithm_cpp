#include <bits/stdc++.h>
using namespace std;

int n, ret;
int main() {
    cin>> n;

    // tmp를 쓰는 이유
    // -> i 값에 변화를 줘서는 안된다. i의 값을 직접 건드리지 않기 위해 tmp 변수 활용.
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
