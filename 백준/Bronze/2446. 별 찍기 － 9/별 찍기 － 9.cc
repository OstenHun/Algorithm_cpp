#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int p = 2*i; p < 2*n-1; p++) cout << "*";
        cout << '\n';
    }
    for (int i = 1; i <= n-1; i++) {
        for (int j = i; j < n-1; j++) cout << " ";
        for (int p = 0; p < 2*i+1; p++) cout << "*";
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

  for(int i = 0; i < N - 1; i++) {
    for(int j = 0; j < i; j++) cout << ' ';
    for(int j = 0; j < 2 * (N - i) - 1; j++) cout << '*';
    cout << "\n";
  }

  for(int j = 0; j < N - 1; j++) cout << ' ';
  cout << "*\n";

  for(int i = 1; i <= N - 1; i++) {
    for(int j = 1; j <= N - i - 1; j++) cout << ' ';
    for(int j = 1; j <= 2 * i + 1; j++) cout << '*';
    cout << "\n";
  }
}
