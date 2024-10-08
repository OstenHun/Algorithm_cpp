#include <bits/stdc++.h>
using namespace std;

int num, sum;
vector<int> heights;
int main() {
    for (int i = 0; i < 9; i++) {
        cin >> num;
        heights.push_back(num);
    }

    vector<int> dwarves;
    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            int exclude1 = heights[j];
            int exclude2 = heights[i];
            dwarves.clear();

            sum = accumulate(
                heights.begin(), 
                heights.end(), 
                0, 
                [&dwarves, exclude1, exclude2](int accumulated, int current) {
                    if (current != exclude1 && current != exclude2) {
                        dwarves.push_back(current);
                        return accumulated + current;
                    } else 
                        return accumulated;
            }
            );

            if (sum == 100) break;
        }
        if (sum == 100) break;
    }
    sort(dwarves.begin(), dwarves.end());
    for (int i : dwarves) {
        cout << i << '\n';
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int num[9], result[7];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 0; i < 9; i++) cin >> num[i];
    
  // 9명 중 2명을 뺀 모든 조합 고려
  for(int a = 0; a < 8; a++) {
    int total = 0;
        
    for(int b = a + 1; b < 9; b++) {
      total = 0;
            
      // 나머지 7명 저장
      for(int c = 0, i = 0; c < 9; c++) if(c != a && c != b) result[i++] = num[c];
      for(int i = 0; i < 7; i++) total += result[i];
            
      // 7명 키의 합이 100인 경우
      if(total == 100) break;
    }
    if(total == 100) break;
  }
    
  // 정렬 후 출력
  sort(result, result + 7);
  for(int i = 0; i < 7; i++) cout << result[i] << "\n";
}
