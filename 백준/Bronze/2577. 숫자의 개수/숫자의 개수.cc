#include <bits/stdc++.h>
using namespace std;

int a, b, c;
long long ret;
string str_ret;
vector<int> arr(10, 0);
int main() {
    cin >> a >> b >> c;
    ret = a * b * c;
    str_ret = to_string(ret);
    
    for (char i : str_ret) {
        arr[i-'0']++;
    }
    for (auto i : arr) {
        cout << i << '\n';
    }
}