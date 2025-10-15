#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
char d_a[1000];
char d_b[1000];
int t_a[1000];
int t_b[1000];

int trace_A[1000000];
int trace_B[1000000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> d_a[i] >> t_a[i];
    for (int i = 0; i < m; i++) cin >> d_b[i] >> t_b[i];

    int idx_a = 0;
    for (int i = 0; i < n; i++) {
        
        if (d_a[i] == 'L') {
            for (int j = 0; j < t_a[i]; j++) {
                idx_a++;
                if (idx_a==1) trace_A[idx_a] = -1;
                else trace_A[idx_a]=trace_A[idx_a-1]-1;
            }
        }
        else {
            for (int j = 0; j < t_a[i]; j++) {
                idx_a++;
                if (idx_a==1) trace_A[idx_a] = 1;
                else trace_A[idx_a]=trace_A[idx_a-1]+1;
            }
        }
    }

    int idx_b = 0;
    for (int i = 0; i < m; i++) {

        if (d_b[i] == 'L') {
            for (int j = 0; j < t_b[i]; j++) {
                idx_b++;
                if (idx_b==1) trace_B[idx_b] = -1;
                else trace_B[idx_b]=trace_B[idx_b-1]-1;
            }
        }
        else {
            for (int j = 0; j < t_b[i]; j++) {
                idx_b++;
                if (idx_b==1) trace_B[idx_b] = 1;
                else trace_B[idx_b]=trace_B[idx_b-1]+1;
            }
        }    
    }

    for (int i = 1; i < 1000000; i++) {
        if (trace_A[i]==trace_B[i]) {
            cout << i << '\n';
            break;
        }
    }

    return 0;

}