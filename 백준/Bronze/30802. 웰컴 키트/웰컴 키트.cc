#include <bits/stdc++.h>
using namespace std;

int n, num, t, p;
int cnt, pen, one;
vector<int> clothes(6);
int main() {
    cin >> n;

    for (int i = 0; i < 6; i++) {
        cin >> num;
        clothes[i] = num;
    }

    cin >> t >> p;
    for (int c : clothes) {
        if (c%t == 0)
            cnt += c/t;
        else
            cnt += c/t + 1;
            
    }

    cout << cnt << '\n';

    pen = n / p;
    one = n % p;

    cout << pen << " " << one << '\n';

    return 0;
}