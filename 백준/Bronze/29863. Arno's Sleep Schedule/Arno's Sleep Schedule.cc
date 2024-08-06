#include <bits/stdc++.h>
using namespace std;

int sleep, wake;
int main() {
    cin >> sleep >> wake;
    if (19 < sleep)
        sleep -= 24 ;
    
    cout << wake - sleep << '\n'; 
}