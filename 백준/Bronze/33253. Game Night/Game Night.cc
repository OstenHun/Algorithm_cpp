// #include <bits/stdc++.h>
// using namespace std;

// int n;
// int main() {
//     int a[26] = {};
//     cin >> n;

//     string old, nw;
//     cin >> old >> nw;

//     for (const auto &w : nw) {
//         a[w-'a']++;
//     }

//     for (const auto &w : old) {
//         if (a[w-'a']==0) continue;
//         a[w-'a']--;
//     }

//     int sum = 0;
//     for (int i = 0; i<26; i++) {
//         sum+= a[i];
//     }

//     cout << sum;
    
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string old_pw, new_pw;
    cin >> old_pw >> new_pw;

    // array 설정하기
    array<int, 26> fre{};

    for (char c : new_pw) {
        fre[c-'a']++;
    }   

    for (char c : old_pw) {
        if (fre[c - 'a'] > 0) {
            fre[c-'a']--;
        }
    }

    // 남은 글자 수 합산하기 -> 배열 내 모든 수 합하는 STL 알고리즘.
    int ans = accumulate(fre.begin(), fre.end(), 0);

    cout << ans << '\n';
    return 0;
}