// 내가 푼 풀이. 기본 sort()의 성질을 활용해 tuple을 만들고 기존의 입력 순서를 넣어줄 변수 num을 가지고 
// sort() 한 후 나이 순으로 정렬 된 후 만약 나이가 같다면 입력 순서인 num을 통해 정렬하도록 설계했다.
// #include <bits/stdc++.h>
// using namespace std;

// int n, age, num;
// string name;
// int main() {
//     cin >> n;
//     vector<tuple<int, int, string>> inputs;
//     for (int i = 0; i < n; i++) {
//         cin >> age >> name;
//         num++;
//         inputs.emplace_back(age, num, name);
//     }

//     sort(inputs.begin(), inputs.end());
//     for (auto i : inputs) {
//         cout << get<0>(i) << " " << get<2>(i) << '\n';
//     }

//     return 0;
// }

// stable_sort와 람다 비교 함수를 통해 나이만을 통해 정렬 후 만약 나이가 같다면 입력 순서 그대로 정렬하는 코드
// Gpt 4-o 를 통해 얻은 결과이다.
#include <bits/stdc++.h>
using namespace std;

int n, age;
string name;
int main() {
    cin >> n;
    vector<pair<int, string>> members(n);
    for (int i = 0; i < n; i++) {
        cin >> members[i].first >> members[i].second;
    }

    stable_sort(members.begin(), members.end(),[](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first < b.first;
    });

    for (auto i : members) {
        cout << i.first << " " << i.second << '\n';
    }

    return 0;
}
