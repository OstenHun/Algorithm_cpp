// 정렬 한 후 조건문의 내용이 보고 배울 점이 있다. 이를 생각했으면 조건이 더 간결했을 듯.
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a+3);
  if(a[0] == a[2]) cout << 10000 + a[0]*1000; // 세 수가 동일
  else if(a[0] == a[1] || a[1] == a[2]) cout << 1000 + a[1]*100; // 두 수가 동일
  else cout << a[2]*100;
}

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && b == c) cout << 10000 + a*1000;
  else if(a == b || a == c) cout << 1000 + a*100;
  else if(b == c) cout << 1000 + b*100;
  else cout << max({a,b,c}) * 100;
}


// 내 풀이
// 다소 비효율적으로 푼 것 같다.
#include <bits/stdc++.h>
using namespace std;

int num, prize;
int nm[4];
int main() {
    for (int i = 0; i < 3; i++) {
        cin >> num;
        nm[i] = num;
    }
    sort(nm, nm+3);

    if (nm[0] == nm[1] && nm[1] == nm[2]) {
        prize = 10000 + nm[0] * 1000;
    } 

    else if (nm[0] == nm[1] && nm[0] != nm[2]) {
        prize = 1000 + nm[0] * 100;
    } else if (nm[1] == nm[2] && nm[1] != nm[0]) {
        prize = 1000 + nm[1] * 100;
    } else if (nm[0] == nm[2] && nm[0] != nm[1]) {
        prize = 1000 + nm[0] * 100;
    } 
    
    else
        prize = nm[2] * 100;


    cout << prize <<'\n';
    return 0;
}
