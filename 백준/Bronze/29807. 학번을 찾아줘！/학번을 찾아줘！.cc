#include <bits/stdc++.h>
using namespace std;

int t, score, ret1, ret2, ret3, ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> su(5, 0);
    

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> score;
        su[i] = score;
    }
    
    int k = su[0], m = su[1], e = su[2], s = su[3], l = su[4];

    if (k > e) {
        ret1 = 508 * (k - e);
    } else {
        ret1 = 108 * (e - k);
    }


    if (m > s) {
        ret2 = 212 * (m - s);
    } else {
        ret2 = 305 * (s - m);
    }

    if (l != 0) {
        ret3 = 707 * l;
    } else {
        ret3 = 0;
    }
    

    ret = 4763*(ret1 + ret2 + ret3);

    cout << ret << '\n';
}