#include <bits/stdc++.h>
using namespace std;

int t, a, b;
string ret;
int main() {
    cin >> t;
    unordered_map<int, string> inputs;
    inputs[1] = "Yakk ";
    inputs[2] = "Doh ";
    inputs[3] = "Seh ";
    inputs[4] = "Ghar ";
    inputs[5] = "Bang ";
    inputs[6] = "Sheesh ";

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        ret = inputs[max(a, b)] + inputs[min(a, b)];
        if (a == 1 && b == 1) 
            ret = "Habb Yakk";
        else if (a == 2 && b == 2) 
            ret = "Dobara";
        else if (a == 3 && b == 3) 
            ret = "Dousa";
        else if (a == 4 && b == 4) 
            ret = "Dorgy";
        else if (a == 5 && b == 5)
            ret = "Dabash";
        else if (a == 6 && b == 6)
            ret = "Dosh";
        else if (a == 6 && b == 5 || a == 5 && b == 6)
            ret = "Sheesh Beesh";
        
        cout << "Case " << i+1 << ": " << ret << '\n';
    }

    return 0;
}