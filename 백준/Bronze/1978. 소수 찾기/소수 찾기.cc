#include <bits/stdc++.h>
using namespace std;

int n, num, cnt;
vector<int> inputs;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    }

    for (int n : inputs) {
        if (n == 1) 
            cnt--;
        bool check = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                check = false;
                break;
            }
        }
        if (check == true)
            cnt++;
    }

    cout << cnt << '\n';
}