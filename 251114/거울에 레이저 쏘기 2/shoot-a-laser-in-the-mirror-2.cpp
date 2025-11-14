## 내 풀이
#include <iostream>
using namespace std;

int n, k;
char map[1000][1000];
int ans;

int dx_R[4] = { 0, 1, 0, -1 }, dy_R[4] = { -1, 0, 1, 0 };
int dx_L[4] = { 0, -1, 0, 1 }, dy_L[4] = { 1, 0, -1, 0 };

void ChangeDir_R(int* dir) {
    if (*dir == 0) *dir = 3;
    else if (*dir == 3) *dir = 0;
    else if (*dir == 1) *dir = 2;
    else if (*dir == 2) *dir = 1;
}

void ChangeDir_L(int* dir) {
    if (*dir == 0) *dir = 1;
    else if (*dir == 1) *dir = 0;
    else if (*dir == 2) *dir = 3;
    else if (*dir == 3) *dir = 2;
}

void OutputToInput(int* dir) {
    if (*dir == 0) *dir = 2;
    else if (*dir == 1) *dir = 3;
    else if (*dir == 2) *dir = 0;
    else if (*dir == 3) *dir = 1;
}

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}

void Move(int* a, int* b, int* dir) {
    if (map[*a][*b] == '/') {
        int nx = *a + dx_R[*dir], ny = *b + dy_R[*dir];
        *a = nx, * b = ny;
        ChangeDir_R(dir);
        OutputToInput(dir);
        ans++;
    }

    else if (map[*a][*b] == '\\') {
        int nx = *a + dx_L[*dir], ny = *b + dy_L[*dir];
        *a = nx, * b = ny;
        ChangeDir_L(dir);
        OutputToInput(dir);
        ans++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    cin >> k;

    int x = 0, y = 0;
    for (int i = 1; i < k; i++) {
        if (i % n == 0) continue;
        int chk = i / n;
        int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
        x += dx[chk], y += dy[chk];
    }

    int dir = (k - 1) / n;

    while (InRange(x, y)) {
        Move(&x, &y, &dir);
    }

    cout << ans;
}

## 간결한 풀이
#include <iostream>                 // 표준 입출력
#define MAX_N 1000                  // 최대 보드 크기 상수
#define DIR_NUM 4                   // 방향 개수(0~3)
using namespace std;                // 가독성 위해 사용 (요청사항)

// ----- 전역 입력/상태 변수 -----
int n;                              // 보드 한 변의 길이 N
char arr[MAX_N][MAX_N];             // 보드: 각 칸의 거울 기호('/', '\')
int start_num;                      // 시작 입구 번호 k (1 ~ 4N)

// 현재 레이저 상태
int x, y;                           // 현재 위치 (행 x, 열 y)
int move_dir;                       // 현재 진행 방향 (0:하, 1:좌, 2:상, 3:우)

// ----- 방향 테이블 -----
// 인덱스 0~3에 대응하는 (dx, dy): 한 칸 이동량
// 0(하): ( +1,  0)
// 1(좌): (  0, -1)
// 2(상): ( -1,  0)
// 3(우): (  0, +1)
int dx[DIR_NUM] = { 1,  0, -1, 0 };
int dy[DIR_NUM] = { 0, -1,  0, 1 };

// 주어진 시작 번호 num=k 에 따라
// 초기 위치(x, y)와 초기 방향(move_dir)을 설정
void Initialize(int num) {
    if (num <= n) {
        // 상단에서 아래로 진입: (0, num-1), dir=0(하)
        x = 0; y = num - 1; move_dir = 0;
    }
    else if (num <= 2 * n) {
        // 우측에서 왼쪽으로 진입: (num-n-1, n-1), dir=1(좌)
        x = num - n - 1; y = n - 1; move_dir = 1;
    }
    else if (num <= 3 * n) {
        // 하단에서 위로 진입: (n-1, n - (num-2n)), dir=2(상)
        x = n - 1; y = n - (num - 2 * n); move_dir = 2;
    }
    else {
        // 좌측에서 오른쪽으로 진입: (n - (num-3n), 0), dir=3(우)
        x = n - (num - 3 * n); y = 0; move_dir = 3;
    }
}

// 좌표 (x, y)가 보드 내부인지 확인
bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

// 다음 방향(next_dir)로 한 칸 이동하고, 현재 방향을 갱신
void Move(int next_dir) {
    x += dx[next_dir];              // 행 이동
    y += dy[next_dir];              // 열 이동
    move_dir = next_dir;            // 진행 방향 갱신
}

// 시뮬레이션 실행: 격자를 빠져나갈 때까지 이동 횟수 반환
int Simulate() {
    int move_num = 0;               // 이동(거울 통과) 횟수 누적

    while (InRange(x, y)) {         // 현재 좌표가 보드 내부인 동안
        // 현재 칸의 거울을 보고 '반사 후 방향'을 먼저 결정
        if (arr[x][y] == '/') {
            // '/' 반사 규칙: 0<->1, 2<->3  (비트 XOR 1)
            Move(move_dir ^ 1);     // 반사 후 한 칸 이동
        } else {
            // '\' 반사 규칙: 0<->3, 1<->2  (3 - dir)
            Move(3 - move_dir);     // 반사 후 한 칸 이동
        }
        move_num += 1;              // 이동 1회(거울 1개 통과) 카운트
    }
    return move_num;                // 격자 밖 → 총 이동 횟수 반환
}

int main() {
    ios::sync_with_stdio(false);    // 빠른 입출력(옵션)
    cin.tie(nullptr);               // 입출력 묶음 해제(옵션)

    // 입력: N, 보드, 시작번호 k
    cin >> n;                       // 보드 크기
    for (int i = 0; i < n; i++) {   // 각 행 입력
        for (int j = 0; j < n; j++) // 각 열 입력
            cin >> arr[i][j];       // 거울 문자 ('/' 또는 '\')
    }
    cin >> start_num;               // 시작 입구 번호

    Initialize(start_num);          // 시작 좌표/방향 설정
    int move_num = Simulate();      // 시뮬레이션 실행

    cout << move_num;               // 결과 출력
    return 0;                       // 프로그램 종료
}
