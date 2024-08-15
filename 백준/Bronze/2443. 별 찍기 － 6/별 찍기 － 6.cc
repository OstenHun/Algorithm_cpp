#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) 
            cout << " ";
        for (int j = 0; j < 2*(n-i)-1; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}


#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int N;
  cin >> N;
    
  for(int i = N; i >= 1; i--){
    for(int j = 1; j <= N - i; j++) cout << ' ';
    for(int j = 1; j <= 2 * i - 1; j++) cout << '*';
    // '*'의 오른쪽 공백은 출력하지 말아야 통과합니다.
    cout << "\n";
  }
}
