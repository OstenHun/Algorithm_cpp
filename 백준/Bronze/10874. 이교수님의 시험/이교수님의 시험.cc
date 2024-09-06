#include <bits/stdc++.h>
using namespace std;

int n, nm, chk;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int ans[11];
    for (int i = 0; i < 10; i++) {
        ans[i] = (i % 5) + 1;
    }

    for (int i = 0; i < n; i++) {
        chk = 0;
        for (int j = 0; j < 10; j++) {
            int tp[11];
            cin >> nm;
            tp[j] = nm;
            if (tp[j] == ans[j]) chk++;
        }
        if (chk == 10)
            cout << i+1 << '\n';
    }
}

// 개선된 코드
#include <bits/stdc++.h>
using namespace std;

int n, nm, chk;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    // 정답 배열: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5
    int ans[10];
    for (int i = 0; i < 10; i++) {
        ans[i] = (i % 5) + 1;
    }

    // 각 시도에 대해 입력을 받으며 비교
    for (int i = 0; i < n; i++) {
        chk = 0;
        for (int j = 0; j < 10; j++) {
            cin >> nm;
            if (nm == ans[j]) chk++;
        }
        // 모두 일치하면 해당 시도 번호 출력
        if (chk == 10) {
            cout << i + 1 << '\n';
        }
    }

    return 0;
}
