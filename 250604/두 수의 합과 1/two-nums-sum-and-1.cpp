#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    string S = to_string(sum);
    int len = S.size();

    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (S[i]=='1')
            cnt++;
    }

    cout << cnt;
    return 0;
}