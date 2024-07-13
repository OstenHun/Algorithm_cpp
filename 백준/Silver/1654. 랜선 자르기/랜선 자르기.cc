// 선형 탐색의 경우 시간이 초과되기 때문에 이분 탐색을 생각해야함.
#include <bits/stdc++.h>
using namespace std;

int n, k, num, mn;
double ret;
vector<int> inputs;
int main() {
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> num;
        inputs.push_back(num);
    }

    while (true) {
        mn++;
        for (auto i : inputs) {
            ret += i / mn;
        }
        if (ret < n)
            break;
        ret = 0;
    }
    cout << mn-1;
    return 0;
}


// 이분 탐색을 활용한 풀이
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
