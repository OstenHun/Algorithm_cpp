#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> numbers;
int n, num;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    for (const auto& i : numbers) cout << i << '\n';
    
    return 0;
}