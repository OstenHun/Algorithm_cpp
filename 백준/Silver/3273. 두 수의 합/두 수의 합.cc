// // 브루트 포스 한 방법
// //시간 초과 발생
// #include <bits/stdc++.h>
// using namespace std;

// int n, x, ret;
// vector<int> nums;
// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
//         nums.push_back(num);
//     }
    
//     cin >> x;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == x) {
//                 ret++;
//             }
//         }
//     }

//     cout << ret << '\n';
// }   

#include <bits/stdc++.h>
using namespace std;

int n, x, ret;
int nms[1000001] = {};
bool occur[2000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> nms[i];

    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x-nms[i] > 0 && occur[x-nms[i]]) ret++;
        occur[nms[i]] = true; // -> 이게 중요한 포인트였음. 이걸 통해서 nms[i]값이 존재하는 지 안 하는 지를 체크 가능.
    }
    cout << ret << '\n';
}
