#include <bits/stdc++.h>
using namespace std;

int m1, c1;
int main() {
    map<int, pair<int, int>> basket;
    for (int i = 0; i < 3; i++) {
        cin >> c1 >> m1;
        // basket[i].first = c1;
        // basket[i].second = m1;
        basket[i] = {c1, m1};
    }


    for (int i = 0; i < 100; i++) {
        int ind = i%3;
        int nind = (ind+1)%3;
        int sum = basket[nind].second += basket[ind].second;

        if (sum > basket[nind].first) {
            basket[ind].second = sum - basket[nind].first;
            basket[nind].second = basket[nind].first;
        } else {
            basket[nind].second = sum;
            basket[ind].second = 0;
        }
    }

    for (auto i : basket) {
        cout << i.second.second << '\n';
    }
}