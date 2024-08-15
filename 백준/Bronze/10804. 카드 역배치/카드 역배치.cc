#include <bits/stdc++.h>
using namespace std;

int a, b;
vector<int> nums;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= 20; i++) {
        nums.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        int pnt = (b-a+1)/2;
        if (a!=b) {
            for (int i = 0; i < pnt; i++) {
                swap(nums[a+i-1], nums[b-i-1]);
            }
        }
    }

    for (int i : nums) {
        cout << i << " ";
    }

}

// #include <bits/stdc++.h>
// using namespace std;

// int num[21];

// // 카드를 역순으로 놓는 함수
// void reverse(int a, int b){
//   for(int i = 0; i < (b - a + 1) / 2; i++)
//     swap(num[a+i], num[b-i]);
// }

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
    
//   for(int i = 1; i <= 20; i++) num[i] = i;
    
//   for(int i = 1; i <= 10; i++) {
//     int a, b;
//     cin >> a >> b;        
//     reverse(a, b);
//   }
    
//   for(int i = 1; i <= 20; i++) cout << num[i] << ' ';
// }


// /*
// STL reverse를 이용한 풀이
// */
// #include <bits/stdc++.h>
// using namespace std;

// int num[21];

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
    
//   for(int i = 1; i <= 20; i++) num[i] = i;
    
//   for(int i = 1; i <= 10; i++) {
//     int a, b;
//     cin >> a >> b;        
//     reverse(num+a, num+b+1);
//   }
    
//   for(int i = 1; i <= 20; i++) cout << num[i] << ' ';
// }

