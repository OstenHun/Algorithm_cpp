#include <bits/stdc++.h>
using namespace std;

int n, t, fee;
vector<int> times;

int Y(vector<int> t) {
    int fee = 0;
    for (int i : t) {
        if (i / 30 == 0)
            fee += 10;
        else
            fee += 10*(i/30+1);  
    }
    return fee;
}

int M(vector<int> t) {
    int fee = 0;
    for (int i : t) {
        if (i / 60 == 0)
            fee += 15;
        else
            fee += 15*(i/60+1);
    }
    return fee;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        times.push_back(t);
    }

    if (M(times) > Y(times)) {
        cout << "Y " << Y(times);
    }
    else if (M(times) < Y(times)) {
        cout << "M " << M(times);
    }
    else {
        cout << "Y M " << Y(times);
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int phone[10000], Y, M;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int N;
  cin >> N;
    
  for(int n = 0; n < N; n++) cin >> phone[n];
    
  for(int n = 0; n < N; n++) Y += ((phone[n] / 30) + 1) * 10;
    
  for(int n = 0; n < N; n++) M += ((phone[n] / 60) + 1) * 15;
    
  if(Y < M) cout << "Y " << Y;
  else if(Y > M) cout << "M " << M;
  else cout << "Y M " << Y;
}
