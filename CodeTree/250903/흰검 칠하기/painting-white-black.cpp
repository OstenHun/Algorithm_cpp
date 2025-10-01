#include <iostream>
using namespace std;

char ans[200001];
int ct_w[200001];
int ct_b[200001];
char dir;
int dist;


int idx = 100000;
int cnt_w, cnt_b, cnt_g;

int main() {
    int n;
    cin >> n;

    int min = idx;
    int max = idx;

    for (int i = 0; i < n; i++) {
        cin >> dist >> dir;

        if (dir == 'L') {
            if (idx-dist < min) min = idx-dist;

            for (int j = 0; j < dist; j++) {
                int minus_idx = idx - j;

                ans[minus_idx] = 'W';
                ct_w[minus_idx]++;

                if (ct_b[minus_idx] >= 2 && ct_w[minus_idx] >= 2) {
                    ans[minus_idx] = 'G';
                } 
            }
            idx -= (dist-1);
        }    

        else {
            if (idx+dist > max) max = idx+dist;

            for (int j = 0; j < dist; j++) {
                int plus_idx = idx + j;

                ans[plus_idx] = 'B';
                ct_b[plus_idx]++;
                
                if (ct_b[plus_idx] >= 2 && ct_w[plus_idx] >= 2) {
                    ans[plus_idx] = 'G';
                }
            } 
            idx += (dist-1);
        }
    }

    for (int i = min; i <= max; i++) {
        if (ans[i] == 'W') cnt_w++;
        else if (ans[i] == 'B') cnt_b++;
        else if (ans[i] == 'G') cnt_g++;
    }

    cout << cnt_w << ' ' << cnt_b << ' ' << cnt_g;
    return 0;
}