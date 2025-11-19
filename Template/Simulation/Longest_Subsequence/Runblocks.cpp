#include <bits/stdc++.h>      // 표준 라이브러리 헤더 모음
using namespace std;          // 요청 전제: using namespace std;

int main() {
    ios::sync_with_stdio(false);  // (1) 빠른 입출력
    cin.tie(nullptr);             // (2) 입출력 분리

    int n;                        // (3) 수열 길이
    if (!(cin >> n)) return 0;    // (4) 입력 실패 시 조기 종료

    // (5) n == 0 인 경우: 블록 개수는 0
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }

    vector<long long> a(n);       // (6) 수열 저장 (값 범위가 커서 long long)
    for (int i = 0; i < n; ++i)   // (7) n개의 숫자 입력
        cin >> a[i];

    int blocks = 0;                // (8) 블록 개수 카운터
    for (int i = 0; i < n; ++i) {  // (9) 0..n-1 순회
        
        // (10) 블록 시작 조건: i==0 이거나, 직전 값과 다르면 새 블록
        if (i == 0 || a[i] != a[i - 1])
            blocks++;              // (11) 블록 수 증가
    }

    cout << blocks << '\n';        // (12) 정답 출력
    return 0;                      // (13) 정상 종료
}
