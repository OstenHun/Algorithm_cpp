// 첫 번째 방법
// 기본 정렬의 튻성을 활용하여 <y, x> 로 배열을 만들어 y값이 오름차순으로 정렬한 것.
#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> ax;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ax.push_back(make_pair(y, x));
    }

    sort(ax.begin(), ax.end());

    for (auto i : ax) cout << i.second << " " << i.first << '\n';
}

// 두 번째 방법
// bool cmp를 설정해 sort()를 설계해서 정렬하는 방법.
#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> nms;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        nms.push_back(make_pair(x, y));
    }

    sort(nms.begin(), nms.end(), cmp);

    for (auto i : nms) cout << i.first << " " << i.second << '\n';
}
