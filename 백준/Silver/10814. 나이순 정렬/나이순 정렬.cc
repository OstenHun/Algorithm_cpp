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