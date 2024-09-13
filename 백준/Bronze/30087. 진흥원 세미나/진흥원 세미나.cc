#include <bits/stdc++.h>
using namespace std;

int n;
string input;
int main() {
    cin >> n;

    map<string, string> seminar;
    seminar["Algorithm"] = "204";
    seminar["DataAnalysis"] = "207";
    seminar["ArtificialIntelligence"] = "302";
    seminar["CyberSecurity"] = "B101";
    seminar["Network"] = "303";
    seminar["Startup"] = "501";
    seminar["TestStrategy"] = "105";

    for (int i = 0; i < n; i++) {
        cin >> input;
        cout << seminar[input] << '\n';
        
    }
}