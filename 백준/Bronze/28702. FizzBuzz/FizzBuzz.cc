#include <bits/stdc++.h>
using namespace std;

int ret;
string str;
vector<string> inputs;
int nums[4];
int main() {
    for (int i = 0; i < 3; i++) {
        cin >> str;
        inputs.push_back(str);
        if (str!="Fizz" && str!="Buzz" && str!="FizzBuzz")
            nums[i] = stoi(str);
    }
    if (nums[2] != 0)
        ret = nums[2] + 1;
    else if (nums[1] != 0)
        ret = nums[1] + 2;
    else 
        ret = nums[0] + 3;
    
    if (ret % 5 == 0 && ret % 3 == 0)
        cout << "FizzBuzz" << '\n';
    else if(ret % 3 == 0)
        cout << "Fizz" << '\n';
    else if(ret % 5 == 0) 
        cout << "Buzz" << '\n';
    else 
        cout << ret << '\n';

    return 0;
    
}