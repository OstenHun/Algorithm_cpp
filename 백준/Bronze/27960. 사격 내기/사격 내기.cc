// 비트마스킹을 이용하는 문제 *********** 다시 볼 만한 문제다.
// 비트마스킹 개념 공부 다시 하기.

#include <bits/stdc++.h>
using namespace std;

int a, b, ret;
int main() {
    cin >> a >> b;

    ret = a ^ b;
    cout << ret << '\n';
}
