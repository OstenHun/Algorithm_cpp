#include <iostream>
#include <vector>

using namespace std;

const int MAXC = 50000;
const int MAXDI = 1000000;

int n, m;
int t[MAXC];
char d[MAXC];
int t_[MAXC];
char d_[MAXC];
vector<int> dir(MAXDI);
vector<int> dir_(MAXDI);
int main() {
    cin >> n >> m;

    int total_a = 0;
    int da = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
        if (d[i] == 'L') {
            for (int j = 0; j < t[i]; j++) {
                da--;
                if (total_a == 0) dir[total_a] = -1;
                else dir[total_a] = da;
                total_a++;
            }
        }
        else {
            for (int j = 0; j < t[i]; j++) {
                da++;
                if (total_a == 0) dir[total_a] = 1;
                else dir[total_a] = da;
                total_a++;
            }
        }
    }

    int total_b = 0;
    int db = 0;
    for (int i = 0; i < m; i++) {
        cin >> t[i] >> d[i];
        if (d[i] == 'L') {
            for (int j = 0; j < t[i]; j++) {
                db--;
                if (total_b==0) dir_[total_b] = -1;
                else dir_[total_b] = db;
                total_b++;
            }
        }
        else {
            for (int j = 0; j < t[i]; j++) {
                db++;
                if (total_b==0) dir_[total_b] = 1;
                else dir_[total_b] = db;
                total_b++;
            }
        }
    }

    int ans = 0;
    int maxx, minx;
    if (total_a > total_b) {
        maxx = total_a;
        minx = total_b; 
    }
    else {
        maxx = total_b;
        minx = total_a;
    }

    for (int i = 1; i < maxx; i++) {
        if (total_a > total_b) {
            if (i >= minx) dir_[i] = dir_[minx-1];
        }
        else if (total_a < total_b) {
            if (i >=minx) dir[i] = dir[minx-1];
        }

        if (dir[i-1]!=dir_[i-1]) {
            if (dir[i]==dir_[i]) ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}