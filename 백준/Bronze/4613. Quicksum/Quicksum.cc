#include <bits/stdc++.h>
using namespace std;

string input;
int sum;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true) {
        getline(cin, input);
        if (input == "#")
            break;
        sum = 0;

        for (int i = 1; i <= input.length(); i++) {
            char j = input[i-1];
            int calc = (int)j - 'A' + 1;
            if (j == ' ')
                calc = 0;

            sum += i * calc;

        }

        cout << sum << '\n';
    }
}