#include <bits/stdc++.h>
using namespace std;

int num;
double n, mx, newGrade;
double sum;
vector<int> grade;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        grade.push_back(num);
    }

    mx = *max_element(grade.begin(), grade.end());
    for (int i = 0; i < n; i++) {
        newGrade = grade[i]/mx*100;
        sum += newGrade;
    }

    cout << sum / n << '\n';
}