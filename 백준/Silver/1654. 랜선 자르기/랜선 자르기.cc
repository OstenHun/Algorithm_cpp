#include <bits/stdc++.h>
using namespace std;

int k, n,  ret, num;
long long low, high, mid, cnt;
vector<int> inputs;
int main() {
    int k, n;
    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        cin >> num;
        inputs.push_back(num);
    }

    low = 1;
    high = *max_element(inputs.begin(), inputs.end());

    while (low <= high) {
        mid = low + (high - low) / 2;
        cnt = 0;
        
        for (int i = 0; i < k; i++) {
            cnt += inputs[i] / mid;
        }

        if (cnt >= n) {
            ret = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ret;
    return 0;
    
}