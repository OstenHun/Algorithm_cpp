#include <bits/stdc++.h>
using namespace std;

int n, m, num;
long long sum;
int low, high, mid;
int ret;
vector<int> trees;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num;
        trees.push_back(num);
    }

    sort(trees.begin(), trees.end());

    low = 0;
    high = trees[n-1];

    while (low <= high) {
        mid = low + (high - low) / 2;
        sum = 0;
        
        for (int tree : trees) {
            if (tree > mid)
                sum += tree - mid;
        }

        if (sum >= m) {
            ret = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        
    }
    cout << ret << '\n';
}