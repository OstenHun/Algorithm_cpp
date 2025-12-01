#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 10000
int n, k;
char loc[10001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int a;
        char l;
        
        cin >> a >> l;
        loc[a-1] = l;
    }

    int max_cnt = 0;
    for (int i = 0; i < MAXN-k+1; i++) {
        int num = 0;
        for (int j = i; j < i+k+1; j++) {
            if (loc[j]=='G') num++;
            else if (loc[j]=='H') num+=2;
        }
        max_cnt = max(max_cnt, num);
    }
    
    cout << max_cnt;
    return 0;
}