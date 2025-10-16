#include <iostream>
#include <vector>
using namespace std;

int n, m;
int v[1000], t[1000];
int v_[1000], t_[1000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> m;

    vector<int> a;
    vector<int> b;
    int s_a = 0;
    int s_b = 0;
    int ti = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> t[i];
        ti += t[i];
        for (int j = 0; j < t[i]; j++) {
            s_a += v[i];
            a.push_back(s_a);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> v_[i] >> t_[i];
        for (int j = 0; j < t_[i]; j++) {
            s_b += v_[i];
            b.push_back(s_b);
        }
    }
    
    vector<int> ans;
    for (int i = 0; i < ti; i++) {
        if (a[i] > b[i]) ans.push_back(1);
        else if (a[i] < b[i]) ans.push_back(2);
        else ans.push_back(0);
    }

    int cnt = 0;
    for (int i = 1; i < ti; i++) {
        if (ans[i]!=0 && ans[i]!=ans[i-1]) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}