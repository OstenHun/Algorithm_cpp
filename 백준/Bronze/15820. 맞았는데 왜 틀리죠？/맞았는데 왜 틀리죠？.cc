#include <bits/stdc++.h>
using namespace std;

int s1, s2;
int ans, out;
int main() {
    cin >> s1 >> s2;
    bool samp = true, sys = true;
    for (int i = 0; i < s1; i++) {
        cin >> ans >> out;
        if (ans != out)
            samp = false;
    }

    for (int j = 0; j < s2; j++) {
        cin >> ans >> out;
        if (ans != out)
            sys = false;
    }

    if(samp && sys) 
        cout << "Accepted";
    else if(samp && !sys)
        cout << "Why Wrong!!!";
    else 
        cout << "Wrong Answer";

    return 0;
}