#include <bits/stdc++.h>
using namespace std;

int n;
int pls, sum, cnt;
int main() {
    cin >> n;
    
    if (n == 1) 
        cnt = 1;
    else if (1 < n && n <= 7) 
        cnt = 2;
    else
        cnt = 3;
        sum = 7;
        pls = 12;
        while (true) {
            sum += pls;
            pls += 6;
            if (sum >= n)
                break;
            cnt++;
        }
    
    cout << cnt;
}

// 방의 최대 숫자를 경계로 지나가는 방의 크기가 달라지기에 
// 각 layer의 최대 숫자를 경계로 계산해주면 된다. 이전의 풀이는 arbitrary 한 값에 대해 생각 하여 위와 같은 코드가 나왔다.
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;

    int layer = 1;
    int maxNum = 1;

    while (maxNum < n) {
        maxNum += 6*layer;
        layer++;
    }
    cout << layer;

    return 0;
}
