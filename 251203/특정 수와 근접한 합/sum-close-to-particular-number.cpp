#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int n, s;
int num[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=num[i];
    }

    int ans = 10000;
    for (int i = 0; i < n; i++) {
        sum-=num[i];
        for (int j = i+1; j < n; j++) {
            sum-=num[j];
            if (ans > abs(sum-s)) ans = abs(sum-s);
        }
        sum+=num[i];
    }


    cout << ans;
    
    return 0;
}