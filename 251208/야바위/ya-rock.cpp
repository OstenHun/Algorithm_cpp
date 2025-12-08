#include <iostream>

using namespace std;

int n;
int a[100], b[100], c[100];
int ans;

void Swap(int a, int b, int* arr) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void Score(int c, int* arr, int &cnt) {
    if (arr[c]==1)
        cnt++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i = 0; i < 3; i++) {
        int rock[3]={};
        rock[i]=1;
        
        int score = 0;
        for (int j = 0; j < n; j++) {
            Swap(a[j]-1, b[j]-1, rock);
            Score(c[j]-1, rock, score);
        }
        ans = max(ans, score);
    }

    cout << ans;

    return 0;
}