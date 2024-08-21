#include <bits/stdc++.h>
using namespace std;

string nm;
vector<int> nms(10, 0);
int sets;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> nm;
    for (auto i : nm) {
        int idx = i - '0'; 
        nms[idx]++;
    }

    sets = (nms[6] + nms[9] + 1) / 2;
    
    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) {
            sets = max(sets, nms[i]);
        }
    }

    cout << sets << '\n';
}
