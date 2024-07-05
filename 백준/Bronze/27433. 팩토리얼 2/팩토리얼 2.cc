// Recursive하게 해결
#include <bits/stdc++.h>
using namespace std;

long long fact_rec(int n) {
    if(n == 1 || n == 0) return 1;
    return n * fact_rec(n - 1);
}

int n = 0;
int main() {
    cin >> n;
    cout << fact_rec(n);
}
// 20! 의 경우 int 범위를 넘어 숫자가 형성돼 정수 오버플로우가 발생한다. 
// 따라서 int fact_rec()이 아니라 long long fact_rec() 으로 자료형 범위를 늘려줘야 한다.


// 반복문 사용
#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long ret = 1;
    for (int i = 1; i <= n; ++i) {
        ret *= i;
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
