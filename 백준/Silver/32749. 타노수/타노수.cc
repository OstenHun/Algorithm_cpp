// 타노수

// #include <bits/stdc++.h>
// using namespace std;

// int n, t, mx;
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     string str;
//     cin >> n >> t;
//     cin >> str;
    
//     int cnt = 1 << n;
//     int length = cnt;
//     for (int i = 0; i < t; i++) {
//         length /= 2;
//     }

//     for (int i = 0; i <= cnt - length; ++i) {
//         int chk = stoi(str.substr(i, length));  
//         if (mx < chk) mx = chk;
//     }

//     cout << mx;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int n, t;
// string str;
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n >> t;
//     cin >> str;

//     int length = 1 << (n-t);
//     string mx = "0";
//     int size = str.size();

//     for (int i = 0; i <= size-length; i++) {
//         string now = str.substr(i, length);
//         if (mx < now) mx = now;
//     }

//     cout << mx;
// }


// 문제 조건을 완전히 잘 못 알고 풀었다.. 삽질을 몇 시간 한건지
// 우선 타노스 했을 때 반이 잘린다는 점을 전혀 고려하지 않았다. 
#include <bits/stdc++.h>
using namespace std;

int n, t;
string str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> t;
    cin >> str;

    int length = 1 << (n-t);
    int blocks = 1 << t;

    string mx = "";
    for (int i = 0; i < blocks; i++) {
        int start = i * length;
        string now = str.substr(start, length);

        if (now > mx) mx = now;
    }
    cout << mx;
    
    return 0;
}