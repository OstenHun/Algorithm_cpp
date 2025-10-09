#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int mx = 0;
    for (int i = 0; i < N; i++) {
        if (i==0 || arr[i] != arr[i-1]) {
            if (cnt > mx) mx = cnt;
            cnt = 1;
        } 
        else {
            cnt++;
        }
    }

    cout << mx << '\n';

    return 0;
}