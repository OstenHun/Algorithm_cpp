#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int room[1003];

int output = INT_MAX;
int sum;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> room[i];
        sum+=room[i];
    }

    
    for (int i = 0; i < n; i++) {
        int cnt = sum;
        int dist = 0;
        int ans[1003]={};
        for (int j = i; j < i+n; j++) {
            int k = j;
            k%=n;
            ans[k] = cnt;
            if (ans[k] > room[k]) {
                ans[k] = room[k];
                cnt-=room[k];
                dist+=cnt;
            }
        }
        output = min(dist, output);
    }

    cout << output;

    return 0;    
}