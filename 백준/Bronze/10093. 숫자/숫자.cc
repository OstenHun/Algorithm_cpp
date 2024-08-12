#include <bits/stdc++.h>
using namespace std;

unsigned long long a, b;
int main() {
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    int sub = b - a;
    if (sub == 0) {
        cout << 0 << '\n';
    } else {
        cout << sub - 1 << '\n';
        for (unsigned long long i = 0; i < sub - 1; i++) {
            cout << i + a + 1 << " ";
        }
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long a, b;
  cin >> a >> b;
  if (a > b) swap(a,b);
  if (a == b || b - a == 1) cout << 0;
  else {
    cout << b - a - 1 << "\n";
    for(long long i = a+1; i < b; i++)
      cout << i << " ";
  }
}
