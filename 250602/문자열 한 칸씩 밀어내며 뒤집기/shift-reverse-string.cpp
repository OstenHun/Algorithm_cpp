#include <iostream>
#include <string>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;
        int len = input_str.length();

        if (query_type == 1) 
            input_str = input_str.substr(1, len-1) 
                + input_str.substr(0, 1);

        else if (query_type == 2) 
            input_str = input_str.substr(len-1, 1) 
                + input_str.substr(0, len-1);
        else {
            string copy;
            copy = input_str;
            for (int i = 0; i < len; i++) {
                input_str[i] = copy[len-i-1];
            }
        }

        cout << input_str << '\n';
    }

    return 0;
}
