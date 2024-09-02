#include <bits/stdc++.h>
using namespace std;

int n, q, num;
int a, b, c, d;
vector<int> arr;
long long sum;
int main() {
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    for (int j = 0; j < q; j++) {
        cin >> num;
        sum = 0;
        if (num == 2) {
            cin >> a >> b >> c >> d;
            for (int i = a-1; i < b; i++) {
                sum += arr[i];
            }
            for (int i = c-1; i < d; i++) {
                sum -= arr[i];
            }
            cout << sum << '\n';
        } 
        if (num == 1) {
            cin >> a >> b;
            for (int i = a-1; i < b; i++) {
                sum += arr[i];
            }
            swap(arr[a-1], arr[b-1]);
            // for (int i : arr) {
            //     cout << i << " ";
            // }
            cout << sum << '\n';
        }
    }
}