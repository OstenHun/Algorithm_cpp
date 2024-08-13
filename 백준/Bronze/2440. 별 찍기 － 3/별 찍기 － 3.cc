#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << "*";
        }
        cout << '\n';
    }
}



#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N;
  cin >> N;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N - i; j++)  cout << '*';
    cout << "\n";
  }
}
