// // 최악의 경우 메모리 사용이 많음 
// #include <bits/stdc++.h>
// using namespace std;

// int n, num;
// vector<int> nms;
// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> num;
//         nms.push_back(num);
//     }
//     sort(nms.begin(), nms.end());

//     for(int i : nms) {
//         cout << i << '\n';
//     }

//     return 0;

// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 정수의 범위가 1부터 10000까지이므로 10001 크기의 배열 생성
    vector<int> count(10001, 0);

    // 입력된 숫자의 개수를 카운팅
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        count[num]++;
    }

    // 정렬된 숫자 출력
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}
