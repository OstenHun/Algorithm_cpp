#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int p = n-i; p < n; p++) {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--) {
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
    int j = 0;
    for( ; j < i; j++)  cout << ' ';
    for( ; j < N; j++)  cout << '*';
    cout << "\n";
  }
}
