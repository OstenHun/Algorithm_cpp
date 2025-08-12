#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    vector<int> block(N);

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < K; i++) {
        for (int j = A[i]-1; j < B[i]; j++) {
            block[j]++;
        }
    }

    int max_val = *max_element(block.begin(), block.end());
    
    cout << max_val;
    return 0;
}