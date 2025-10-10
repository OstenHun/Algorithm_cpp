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
    int mx = 1;
    for (int i = 0; i < N; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            cnt = 1;
        } 
        else if (arr[i] == arr[i-1]) {
            cnt++;
        }

        if (cnt > mx) mx = cnt;
    }  

    cout << mx << '\n';

    return 0;
}