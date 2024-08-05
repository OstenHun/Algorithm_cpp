// 전혀 생각 못했던 방법. 훨씬 간결한 풀이라고 생각한다.
#include <bits/stdc++.h>
using namespace std;

int result, input;
string res = "DCBAE";

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int r = 0; r < 3; r++) {
    result = 0;
    for(int c = 0; c < 4; c++) {
      cin >> input;
      result += input;
    }
    cout << res[result] << '\n';
  }
}


#include <bits/stdc++.h>
using namespace std;

int yut;
int main() {
    for (int j = 0; j < 3; j++) {
        vector<int> yuts;
        for (int i = 0; i < 4; i++) {
            cin >> yut;
            yuts.push_back(yut);
        }

        int stom = 0;
        int back = 0;
        for (int i : yuts) {
            if (i == 0)
                stom++;
            else
                back++;
        }

        if (stom == 4) 
            cout << "D" << '\n'; 
        else if (stom == 3) 
            cout << "C" << '\n';
        else if (stom == 2)
            cout << "B" << '\n';
        else if (stom == 1)
            cout << "A" << '\n';
        else
            cout << "E" << '\n';
    }

    return 0;
}
