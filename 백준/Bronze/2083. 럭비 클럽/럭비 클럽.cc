#include <bits/stdc++.h>
using namespace std;

string name, age, weight;
int main() {
    while(true) {
        vector<string> inpts;
        cin >> name >> age >> weight;
        if (name == "#" && age == "0" && weight == "0")
            break;
        inpts.push_back(name);
        inpts.push_back(age);
        inpts.push_back(weight);

        if(stoi(inpts[1]) > 17 || stoi(inpts[2]) >= 80) {
            cout << inpts[0] << " Senior" << '\n';
        } else
            cout << inpts[0] << " Junior" << '\n';
    }

    return 0;
}