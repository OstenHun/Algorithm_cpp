#include <bits/stdc++.h>
using namespace std;

int n, num, ex, ret;
vector<int> inputs;
int sum;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    }
    sort(inputs.begin(), inputs.end());
    ex = round(n * 0.15);
    
    
    inputs.erase(inputs.begin(), inputs.begin() + ex);
    inputs.erase(inputs.end() - ex, inputs.end());

    for(int i : inputs) {
        sum += i;
    }

    ret = round(sum/(float)inputs.size());
    
    if(n == 0)
        ret = 0;

    cout << ret;
}

// 이 코드도 존재.
#include <bits/stdc++.h>
using namespace std;

int n, num, ex, ret;
vector<int> inputs;
double sum;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    } 
    sort(inputs.begin(), inputs.end());
    ex = round(n * 0.15);

    // 여기가 다름 포인트
    for (int i = ex; i < n - ex; i++) {
        sum += inputs[i];
    }

    ret = round(sum/(n - ex * 2));
    
    if(n == 0)
        ret = 0;

    cout << ret;
}
