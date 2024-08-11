#include <bits/stdc++.h>
using namespace std;

int median, num, sum;
double mean;
vector<int> nums(5);
int main() {
    for (int i = 0; i < 5; i++) {
        cin >> num;
        nums[i] = num;
        sum += num;
    }
    sort(nums.begin(), nums.end());
    mean = sum / 5;
    median = nums[2];

    cout << mean << '\n';
    cout << median << '\n';
    return 0;
}   