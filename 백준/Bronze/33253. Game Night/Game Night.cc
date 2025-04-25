#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    int a[26] = {};
    cin >> n;

    string old, nw;
    cin >> old >> nw;

    for (const auto &w : nw) {
        a[w-'a']++;
    }

    for (const auto &w : old) {
        if (a[w-'a']==0) continue;
        a[w-'a']--;
    }

    int sum = 0;
    for (int i = 0; i<26; i++) {
        sum+= a[i];
    }
    
    cout << sum;
    

}