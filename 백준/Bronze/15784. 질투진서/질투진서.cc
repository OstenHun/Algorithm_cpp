#include <bits/stdc++.h>
using namespace std;

int n, a, b;
bool check;
vector<vector<int>> lns;
int main() {
    cin >> n >> a >> b;
    

    for(int i = 0; i < n; i++) {
        vector<int> in;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            in.push_back(num);
        }
        lns.push_back(in);
    }

    // cout << lns[a-1][b-1] << '\n';

    for (int i = 0; i < n; i++) {
        if (a-1 == i) {
            for (int j = 0; j < n; j++) {
                if (lns[i][j] > lns[a-1][b-1])
                    check = true;
                }
            } else {
            if (lns[i][b-1] > lns[a-1][b-1])
                check = true;
            
        }
    }
        

    if (check) cout << "ANGRY" << '\n';
    else cout << "HAPPY" << '\n';
}