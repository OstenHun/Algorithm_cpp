#include<bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string nums;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        nums+=to_string(i);
    }
    
    string str = to_string(n);
    
    cout << nums.find(str)+1 << '\n';
}