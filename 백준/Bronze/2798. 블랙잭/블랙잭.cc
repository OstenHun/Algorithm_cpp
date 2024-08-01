#include <bits/stdc++.h>
using namespace std;

int n, m, num, ret;
vector<int> nums;

void combi(int start, vector<int>& b) {
    if (b.size() == 3) {
        int current_sum = accumulate(b.begin(), b.end(), 0);
        if (current_sum <= m && ret < current_sum) {
            ret = current_sum;
        }
        return;
    }
    for (int i = start; i < n; i++) {
        b.push_back(nums[i]);
        combi(i + 1, b);
        b.pop_back();
    }
}

int main() {
    cin >> n >> m;
    vector<int> b;
    for(int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    ret = 0;
    combi(0, b);
    cout << ret << '\n';
    return 0;
}   