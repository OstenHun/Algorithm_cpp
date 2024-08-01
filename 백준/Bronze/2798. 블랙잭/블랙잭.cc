// 나의 이전 풀이는 indx를 불러오고 그 index를 다시 입력하여 참조하는 식으로 갔다. 
여기서는 sum 함수를 여러 번 호출하며 불필요한 복사가 반복되는데
실제 값 자체를 조합하여 계산 하도록 개선한 코드이다.

#include <bits/stdc++.h>
using namespace std;

int n, m, ret;
vector<int> nums;

void combi(int start, vector<int>& b) {
    if (b.size() == 3) {  // 3장의 카드를 선택한 경우
        int current_sum = accumulate(b.begin(), b.end(), 0);
        if (current_sum <= m && current_sum > ret) {
            ret = current_sum; // 최대 합 갱신
        }
        return;
    }
    for (int i = start; i < n; i++) { // start부터 시작하여 중복 선택 방지
        b.push_back(nums[i]); // 실제 값을 벡터에 추가
        combi(i + 1, b); // 다음 인덱스부터 탐색
        b.pop_back(); // 백트래킹
    }
}

int main() {
    cin >> n >> m;
    nums.resize(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    ret = 0; // 최대 합 초기화
    vector<int> b;
    combi(0, b); // 조합 생성 시작
    cout << ret << '\n'; // 결과 출력
    return 0;
}
