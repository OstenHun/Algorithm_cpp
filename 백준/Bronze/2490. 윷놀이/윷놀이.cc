#include <bits/stdc++.h>
using namespace std;

int yut;
int main() {
    for (int j = 0; j < 3; j++) {
        vector<int> yuts;
        for (int i = 0; i < 4; i++) {
            cin >> yut;
            yuts.push_back(yut);
        }

        int stom = 0;
        int back = 0;
        for (int i : yuts) {
            if (i == 0)
                stom++;
            else
                back++;
        }

        if (stom == 4) 
            cout << "D" << '\n'; 
        else if (stom == 3) 
            cout << "C" << '\n';
        else if (stom == 2)
            cout << "B" << '\n';
        else if (stom == 1)
            cout << "A" << '\n';
        else
            cout << "E" << '\n';
    }

    return 0;
}