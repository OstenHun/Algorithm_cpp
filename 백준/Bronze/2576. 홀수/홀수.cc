#include <bits/stdc++.h>
using namespace std;

int num, sum;
vector<int> odds;
int main() {
    for (int i = 0; i < 7; i++) {
        cin >> num;
        if (num % 2 != 0)
            odds.push_back(num);
    }

    sort(odds.begin(), odds.end());
    sum = accumulate(odds.begin(), odds.end(), 0);

    if (odds.size() == 0)
        cout << -1 << '\n';
    else {
        cout << sum << '\n';
        cout << odds[0] << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int x, odd = 0, sum = 0, min = 100;

  for (int i = 0; i < 7; i++) {
    cin >> x;

    if (x & 1) {
      odd += 1;
      sum += x;

      if (x < min) {
        min = x;
      }
    }
  }

  if (odd) cout << sum << "\n" << min;
  else cout << "-1";
}
