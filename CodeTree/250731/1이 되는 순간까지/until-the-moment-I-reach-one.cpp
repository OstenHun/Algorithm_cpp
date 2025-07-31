#include <iostream>

using namespace std;

int N, cnt;

int F(int n) {
    if (n==1)
        return cnt;

    if (n%2==0) {
        cnt++;
        return F(n/2);
    }

    cnt++;
    return F(n/3);

}

// 해설 기반 -> 이게 좀 더 재귀를 잘 이용한 풀이인 것 같다.
int GetNum(int n) {
    if (n==1)
        return 0;

    if (n % 2 == 0)
        return GetNum(n/2) + 1;
    
    return GetNum(n/3) + 1;
}

int main() {
    cin >> N;

    cout << F(N);

    return 0;
}
