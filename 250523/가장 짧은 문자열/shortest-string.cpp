#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int sl1 = s1.length();
    int sl2 = s2.length();
    int sl3 = s3.length();


    int mx = max({sl1, sl2, sl3});
    int mn = min({sl1, sl2, sl3});

    cout << mx - mn;

    return 0;
}