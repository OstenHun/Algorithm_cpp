vector만을 이용한 풀이 O(n*m) 으로 가장 오래 걸림.
#include <bits/stdc++.h>
using namespace std;

int n, m, num;
int cnt;
vector<int> inputs;
vector<int> outputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    }
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> num;
        cnt = count(inputs.begin(), inputs.end(), num); >> count 의 시간 복잡도가 n이다. 이는 반복문을 사용하는 것과 동일.
        outputs.push_back(cnt);
    }

    for (auto i : outputs) 
        cout << i << " ";

    return 0;
}


// map을 사용한 풀이 >> 이것도 시간 초과
#include <bits/stdc++.h>
using namespace std;

int n, m, num;
map<int, int> inputs;
vector<int> outputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        inputs[num]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;
        outputs.push_back(inputs[num]);
    }

    for (auto i : outputs)
        cout << i << " ";

    return 0;
}

// unordered_map 사용 풀이 O(n + m)으로 가장 적은 시간 걸림.
#include <bits/stdc++.h>
using namespace std;

int n, m, num;
unordered_map<int, int> inputs;
vector<int> outputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        inputs[num]++;
    }

    cin >> m;
    outputs.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> num;
        outputs[i] = inputs[num];
    }

    for (auto i : outputs)
        cout << i << " ";

    return 0;
}
