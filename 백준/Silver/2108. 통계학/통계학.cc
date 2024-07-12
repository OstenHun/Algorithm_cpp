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


// gpt-4o의 풀이 참고
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // 1. 산술평균 (소수 첫째 자리에서 반올림)
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }
    int mean = round(sum / n);

    // 2. 중앙값
    sort(numbers.begin(), numbers.end());
    int median = numbers[n / 2];

    // 3. 최빈값
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        freq[numbers[i]]++;
    }

    vector<pair<int, int>> freq_vec(freq.begin(), freq.end());
    sort(freq_vec.begin(), freq_vec.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    int mode;
    if (freq_vec.size() > 1 && freq_vec[0].second == freq_vec[1].second) {
        mode = freq_vec[1].first;
    } else {
        mode = freq_vec[0].first;
    }

    // 4. 범위
    int range = numbers.back() - numbers.front();

    // 결과 출력
    cout << mean << endl;
    cout << median << endl;
    cout << mode << endl;
    cout << range << endl;

    return 0;
}
