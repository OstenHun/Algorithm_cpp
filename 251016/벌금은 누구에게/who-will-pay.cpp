#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
int student;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    vector<int> x(n);

    for (int i = 0; i < m; i++) {
        cin >> student;
        x[student-1]++;
        if (x[student-1]>=k) {
            cout << student << '\n';
            break;
        }
    } 

    return 0;
}