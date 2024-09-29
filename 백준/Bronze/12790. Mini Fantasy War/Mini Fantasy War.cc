#include <bits/stdc++.h>
using namespace std;

int t, pw;
int hp, mp, att, def, h, m, a, d;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> hp >> mp >> att >> def >> h >> m >> a >> d;
        
        hp+=h;
        mp+=m;
        att+=a;
        def+=d;
        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;
        if (att < 0) att = 0;
        pw = hp + 5*mp + 2*att + 2*def;

        cout << pw << '\n';
    }
}