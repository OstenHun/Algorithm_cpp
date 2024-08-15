#include <bits/stdc++.h>
using namespace std;

int a, b;
vector<int> nums;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= 20; i++) {
        nums.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        int pnt = (b-a+1)/2;
        if (a!=b) {
            for (int i = 0; i < pnt; i++) {
                swap(nums[a+i-1], nums[b-i-1]);
            }
        }
    }

    for (int i : nums) {
        cout << i << " ";
    }

}