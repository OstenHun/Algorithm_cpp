
// 내 풀이.
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

// 해설 참고해서 작성한 풀이
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string input_str;
int str_size;

int main() {
    int q_num;
    cin >> input_str >> q_num;

    str_size = input_str.size();

    int q_type;
    for (int i = 0 ; i < q_num; i++) {
        cin >> q_type;
        if (q_type == 1) {
            int len = (int) input_str.size();
            input_str = input_str.substr(1, len - 1) + input_str.substr(0, 1);

            cout << input_str << '\n';
        }

        else if (q_type == 2) {
            int len = (int) input_str.size();

            //String containing the substring [pos, pos + count) or [pos, size()).
            input_str = input_str.substr(len-1, 1) + input_str.substr(0, len - 1);
            // input_str = input_str.substr(len-1, len) + input_str.substr(0, len - 1);
            
            cout << input_str << '\n';
        }

        else if (q_type == 3) {
            reverse(input_str.begin(), input_str.end());
            
            cout << input_str << '\n';
        }
    }

    return 0;
}
