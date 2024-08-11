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


#include <bits/stdc++.h>
using namespace std;

int num[5], total;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 0; i < 5; i++) cin >> num[i];
    
  // 평균
  for(int i = 0; i < 5; i++) total += num[i];
  cout << total / 5 << "\n";
    
  // 중앙값
  sort(num, num + 5);
  cout << num[2];
}
