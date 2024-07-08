#include <bits/stdc++.h>
using namespace std;

int ret;
int main() {
    int nm[10];
    for (int i = 0; i < 10; i++) {
        cin >> nm[i];
    }
    
    int rem[42] = {0, };
    for (int j = 0; j < 10; j++) {
        if (rem[nm[j] % 42] == 0) {
            ret += 1;
            rem[nm[j] % 42] += 1;
        }
    }
    cout << ret;
}
// >> 10개 반복 입력 이후 가능한 나머지 갯수만큼 배열 생성 후 나머지를 index로 하는 배열에 만약 나머지가 나오면 1을 더한다. 
    이후 나머지 카운트 변수 ret에 1을 더한다. 이와 같은 방법으로 중복된 나머지는 없애고 서로 다른 나머지의 개수만을 구했다.

    
// 더 효율적인 풀이.
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> remainders;
    for (int i = 0; i < 10; ++i) {
        int num;
        cin >> num;
        remainders.insert(num % 42);
    }

    cout << remainders.size() << endl;

    return 0;
}

>> unordered_set 을 통해 나머지 값 저장. 집합을 활용하여 중복된 값을 허용하지 않음.
    10개의 숫자 입력 받고 각 숫자를 42로 나누어 나머지 값을 집합에 넣음.
    이후 집합의 크기를 출력하면 서로 다른 나머지의 개수가 된다.
