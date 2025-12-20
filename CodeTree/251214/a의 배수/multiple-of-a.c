#include <stdio.h>

int N, a;
int main() {
    scanf("%d %d", &N, &a);

    int i = 1;
    while(i <= N) {
        if (i%a==0) {
            printf("1\n");
        } else if (i%a!=0) {
            printf("0\n");
        }
        i++;
    }
    return 0;
}