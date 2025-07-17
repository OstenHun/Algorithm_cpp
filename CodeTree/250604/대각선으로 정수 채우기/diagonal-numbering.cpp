// 내 풀이
/*
    우선 숫자가 들어가는 좌표를 (x, y) 좌표의 합에 따라 구분하여 관찰하여 그 경향성에 맞게 이중 반복문을 사용해 구현했다.
    
    e.g)
        입력 : 4 6
        
        (0, 0)
        (0, 1) -> (1, 0)
        (0, 2) -> (1, 1) -> (2, 0)
        (0, 3) -> (1, 2) -> (2, 1) -> (3, 0)
        (0, 4) -> (1, 3) -> (2, 2) -> (3, 1)
        (0, 5) -> (1, 4) -> (2, 3) -> (3, 2)
        (1, 5) -> (2, 4) -> (3, 3)
        (2, 5) -> (3, 4)
        (3, 5)

        --> (x, y) 의 합이 0에서 n+m-2까지 생김을 알 수 있다. (예시에선, 4+6-2 = 8)
            이 값에 따라 처음 반복문을 설정했다. (행의 개수만큼)
            각 행의 열들을 보면 (x, y) 좌표는 x+=1, y-=1 의 경향성을 보인다. 다만, 그 값은 0보다 크며, 최초 입력 n-1, m-1 보다 크지 않으며, 좌표의 합은 i를 유지한다.
            --> 이 조건에 맞게 구현했다.

*/

#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    int mat[101][101];

    int x = 0;
    int y = 0;
    int cnt = 1;
    mat[x][y] = 1;
    for (int i = 1; i <= n+m-2; i++) {
        if (y < m-1) y++;
        else x++;

        int x_i = x;
        int y_i = y;
        while ( 0 <= x_i && x_i <= n-1 && 
                0 <= y_i && y_i <= m-1 &&
                x_i+y_i == i) {
            cnt++;
            mat[x_i][y_i] = cnt;
            x_i++;
            y_i--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}


// 스텝을 나눠서 해결
/*

    // step 1
    1  2  4  7  11 15
    3  5  8  12 16 
    6  9  13 17 
    10 14 18

    // step 2
                  19
               20 22  
            21 23 24


*/

#include <iostream>
using namespace std;

int n, m;
int answer[100][100] = {0};
int cnt = 1; 
int main() {
    cin >> n >> m;

    // step 1
    for (int start_col = 0; start_col < m; start_col++) {
        int curr_row = 0;
        int curr_col = start_col;

        while (0 <= curr_col && curr_row < n) {
            answer[curr_row][curr_col] = cnt;

            curr_row++;
            curr_col--;
            cnt++;
        }
    }

    // step 2
    for (int start_row = 1; start_row < n; start_row++) {
        int curr_row = start_row;
        int curr_col = m - 1;

        while (0 <= curr_col && curr_row < n) {
            answer[curr_row][curr_col] = cnt;

            curr_row++;
            curr_col--;
            cnt++;
        }
    }

    // 전체 출력
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << answer[row][col] << '\n';
        }

        cout << '\n';
    }
}


// 제일 단순한 풀이
/*
    // step 1
    직사각형을 왼쪽 위에서부터 오른쪽 아래 방향으로 순회한다. 


    // step 2
    이 과정에서 혹시 값이 없다면, 그 지점을 시작으로 대각선 방향으로 숫자를 채우는 것을 시작한다.


    // step 3
    이 과정으로 (n-1, m-1) 위치까지 반복한다.

*/
#include <iostream>
using namespace std;

int n, m;
int mat[100][100] = {};
int cnt = 1;
int main() {
    cin >> n >> m;

    // Step 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Step 2
            if (mat[i][j] == 0) {

                int x = i, y = j;

                while (x < n && 0 <= y) {
                    if (mat[x][y] == 0) {
                        mat[x][y] = cnt++;
                        x++;
                        y--;
                    } else {
                        break;
                    }
                }

            } else {
                continue;
            }


        }
    }


    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << ' ';
        }

        cout << '\n';
    }
}


