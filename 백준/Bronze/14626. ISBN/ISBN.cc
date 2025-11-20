#include <bits/stdc++.h>
using namespace std;

string num;
int sum, idx;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> num;


    for (int i = 0; i < 13; i++) {
        if (num[i]=='*') 
            idx = i;
        else {
            int nm = num[i]-'0';

            if (i%2==0) {
                sum+=nm * 1;
            } else {
                sum+=nm * 3;
            }
        }
    }
    

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        int current_sum = sum;

        if (idx % 2 ==0) {
            current_sum += i * 1;
        } else {
            current_sum += i * 3;
        }

        if (current_sum % 10 == 0) {
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;
}