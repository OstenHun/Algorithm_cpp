#include <bits/stdc++.h>
using namespace std;

int cnt = 0, range, mode, num;
double n, mid, sum;
double mean;
vector<int> inputs;
vector<int> modes;
map<int, int> mp;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
        sum += num;
        if (mp[num] > 0) {
            mp[num]++;
        } else 
            mp[num] = 1;
    }
    
    mean = sum / n;
    sort(inputs.begin(), inputs.end());
    mid = inputs[n / 2];
    range = inputs[n - 1] - inputs[0];
    
    // 최빈값 구하기.
    for (auto &p : mp) {
        if(p.second >= cnt) {
            cnt = p.second;
            mode = p.first;
        } 
    }

    // 최빈값 중 두 번째로 작은 값 찾기 위해 최빈값들을 벡터에 넣음.
    for(auto &p : mp) {
        if (p.second == cnt) {
            modes.push_back(p.first);
        }
    }
    // 두 번째로 작은 최빈값을 용이하게 찾기 위해 정렬함.
    sort(modes.begin(), modes.end());


    if (modes.size() > 1) {
        mode = modes[1];
    } else 
        mode = modes[0];
    
    if (round(mean) == -0)
        cout << 0 << '\n';
    else 
        cout << round(mean) << '\n';
    cout << mid << '\n';
    cout << mode << '\n';
    cout << range;
}