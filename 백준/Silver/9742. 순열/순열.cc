// 메모리 초과 되는 풀이
#include <bits/stdc++.h>
using namespace std;

string str;
int n;

int main()
{
    while (true)
    {
        cin >> str >> n;
        vector<char> chars(str.begin(), str.end());

        vector<vector<char>> ret;
        sort(chars.begin(), chars.end());

// 모든 순열을 벡터에 넣게 되면 너무 많은 메모리를 소비한다.
        do {
            ret.push_back(chars);
        } while (next_permutation(chars.begin(), chars.end()));

        string result;
        if (n >= ret.size() || n < 1) {
            result = "No permutation";
        } else
            result = string(ret[n - 1].begin(), ret[n - 1].end());

        cout << str << " " << n << " = " << result << endl;
    }
}

// 출력 초과 뜬 풀이
// 입력을 모두 받고 각 입력에 따라 결과를 출력하는 방법을 해보자.
#include <bits/stdc++.h>
using namespace std;

string str;
int n;

int main()
{
    while (true)
    {
        cin >> str >> n;

        if (n < 1) {
            cout << str << " " << n << " = No permutation" << endl;
            continue;
        }

        vector<char> chars(str.begin(), str.end());
        sort(chars.begin(), chars.end());

        bool hasPermutation = true;
        for (int i = 0; i < n - 1; i++) {
            if (!next_permutation(chars.begin(), chars.end()))
            {
                cout << str << " " << n << " = No permutation" << endl;
                hasPermutation = false;
                break;
            }
        }

        if (hasPermutation) {
            string result(chars.begin(), chars.end());
            cout << str << " " << n << " = " << result << endl;
        }
    }
}


// 입력을 한 번에 받고 결과 출력을 한 번에 하기.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;
    vector<pair<string, int>> inputs;
    
    while(cin >> str >> n) {
        inputs.push_back({str, n});
    }
    
    for (auto &input : inputs) {
        string str = input.first;
        int n = input.second;
        
        if (n < 1) {
            cout << str << " " << n << " = No permutation" << endl;
            continue;
        }
        
        vector<char> chars(str.begin(), str.end());
        sort(chars.begin(), chars.end());
        
        bool hasPermutation = true;
        for (int i = 0; i < n - 1; i++) {
            if (!next_permutation(chars.begin(), chars.end())) {
                cout << str << " " << n << " = No permutation" << endl;
                hasPermutation = false;
                break;
            }
        }
        
        if (hasPermutation) {
            string result(chars.begin(), chars.end());
            cout << str << " " << n << " = " << result << endl;
        }
    }
    
    return 0;
}
