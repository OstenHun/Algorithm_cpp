#include <iostream>
#include <vector>
using namespace std;

int n;
int main() {
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i+1+j*5 << ' ';
        }
        cout << '\n';
    }
    return 0;
}