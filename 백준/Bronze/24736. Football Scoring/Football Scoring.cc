#include <bits/stdc++.h>
using namespace std;

int t, f, s, a, c;
int score1, score2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t >> f >> s >> a >> c;
    score1 = 6*t + 3*f + 2*s + a + 2*c;
    cin >> t >> f >> s >> a >> c;
    score2 = 6*t + 3*f + 2*s + a + 2*c;

    cout << score1 << " " << score2;

}