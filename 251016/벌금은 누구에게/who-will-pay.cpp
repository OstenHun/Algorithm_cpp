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

    // bool chk = false;
    int ans = -1;
    for (int i = 0; i < m; i++) {
        cin >> student;
        x[student-1]++;
        if (x[student-1]>=k) {
            ans = student;
            // cout << student << '\n';
            break;
        }
        
    } 

    cout << ans << '\n';

    return 0;
}