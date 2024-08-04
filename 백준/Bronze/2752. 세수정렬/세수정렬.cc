// 수학적 풀이
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c; // 입력
  cin >> a >> b >> c;
  int d, e, f; // 크기 순으로 출력할 세 수
  d = min({a,b,c});
  f = max({a,b,c});
  e = a+b+c-d-f;
  cout << d << ' ' << e << ' ' << f;
}

// sort 사용하기
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[4];
  for(int i=0;i<3;i++){
    cin>>arr[i];
  }
  sort(arr, arr+3);
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
}

// 내 풀이
#include <bits/stdc++.h>
using namespace std;

int a[3], num;
int main() {
    for(int i = 0; i < 3; i++) {
        cin >> num;
        a[i] = num;
    }
    sort(a, a + 3);
    for (int i : a) {
        cout << i << " ";
    }
    return 0;
}
