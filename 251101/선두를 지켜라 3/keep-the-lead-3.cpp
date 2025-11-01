#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1000000;

int N, M;
int s, s2;
int v[1000], t[1000];
int v2[1000], t2[1000];
vector<int> dis;
vector<int> dis2;
vector<int> ans;

int main() {
    cin >> N >> M;

    int time = 0;
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
        time+=t[i];
        for (int j = 0; j < t[i]; j++) {
            s+=v[i];
            dis.push_back(s);
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
        for (int j = 0; j < t2[i]; j++) {
            s2+=v[i];
            dis2.push_back(s2);
        }
    }  

    for (int i = 0; i < time; i++) {
        if (dis[i] < dis2[i]) {
            ans.push_back(1);
        } else if (dis[i] > dis2[i]) {
            ans.push_back(2);
        } else {
            ans.push_back(3);
        }
    }

    int cnt = 0;
    for (int i = 0; i < time; i++) {
        if (i==0) {
            if (ans[i]!=3) cnt++;
        } else {
            if (ans[i-1]!=ans[i]) cnt++;
        }
    }

    cout << cnt;
    return 0;
}