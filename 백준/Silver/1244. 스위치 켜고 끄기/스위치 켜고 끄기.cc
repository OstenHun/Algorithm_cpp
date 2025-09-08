#include <bits/stdc++.h>
using namespace std;

int sw;
vector<int> sensor;

int stu;
int sex, num;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> sw;

    for (int i = 0; i < sw; i++) {
        int nm;
        cin >> nm;
        sensor.push_back(nm);
    }

    cin >> stu;
    for (int j = 0; j < stu; j++) {
        cin >> sex >> num;

        if (sex == 1) {
            for (int i = 0; i < sw; i++) {
                if ((i+1) % num == 0) {
                    if (sensor[i]==0) sensor[i] = 1;
                    else sensor[i] = 0;
                }
            }
        }

        else {
            sensor[num-1] = 1 - sensor[num-1];

            for (int i = 1; (num - 1 - i) >= 0 && (num-1+i) < sw; i++) {
                if (sensor[num-1-i] == sensor[num-1+i]) {
                    sensor[num-1-i] = 1-sensor[num-1-i];
                    sensor[num-1+i] = 1-sensor[num-1+i];
                } else break;
            }
        }
    }

    for (int i = 0; i < sw; i++) {
        cout << sensor[i] << ' ';
        if ((i+1)%20==0) cout << '\n';
    }

    return 0;
}