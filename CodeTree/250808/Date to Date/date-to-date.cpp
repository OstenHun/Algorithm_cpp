#include <iostream>

using namespace std;

int m1, d1, m2, d2;
int elapsed_days;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (1) {
        elapsed_days++;

        if (m1 == m2 && d1 == d2)
            break;

        d1++;

        if (d1 > num_of_days[m1]) {
            m1++;
            d1=1;
        }
    }

    cout << elapsed_days;

    return 0;
}

// 전체 일 수 각각 구해서 빼는 방법
#include <iostream>

using namespace std;

int NumOfDays(int m, int n) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 1; i < m; i++) 
        total_days += days[i];

    total_days += d;

    return total_days;
}

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    cout << NumOfDays(m2, d2) - NumOfDays(m1, d1) + 1;

    return 0;
}
