#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        long long sum = 0;
        int sign = 0; // 부호 변화 횟수

        for (int j = 0; j < n; j++) {
            long long num, p_sum = sum;
            cin >> num;
            sum += num;
            if (num > 0 && p_sum > 0 && sum < 0) sign++;
            if (num < 0 && p_sum < 0 && sum > 0) sign--;
        }

        if (sign == 0) {
            if (sum == 0)
                cout << "0\n";
            else
                cout << (sum > 0 ? "+" : "-") << '\n';
        } else {
            cout << (sign > 0 ? "+" : "-") << '\n';
        }
    }

    return 0;
}
