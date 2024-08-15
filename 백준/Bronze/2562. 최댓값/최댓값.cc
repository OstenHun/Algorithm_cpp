#include <bits/stdc++.h>
using namespace std;

vector<int> inputs;
int mx, indx;
int n;
int main() {
    for (int i = 0; i < 9; i++) {
        cin >> n;
        inputs.push_back(n);
        if (mx < n) {
            mx = n;
            indx = i;
        }
    }
    cout << mx << '\n';
    cout << indx + 1 << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int n, maxvalue, maxindex;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 1; i < 10; i++){
    cin >> n;
    // 전역변수의 초기값은 0이므로 바로 비교 가능합니다.
    if(maxvalue < n){
      maxvalue = n;
      maxindex = i;
    }
  }
  cout << maxvalue << "\n" << maxindex;
}

#include <bits/stdc++.h>
using namespace std;

int a[9];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0; i < 9; i++) cin >> a[i];
  cout << *max_element(a, a+9) << '\n';
  cout << max_element(a, a+9) - a + 1;
}

/*
max_element 함수를 이용한 풀이
*/
