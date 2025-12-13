#include <stdio.h>

int main() {
    int a = 1;
    int b = 5;
    int c = 3;
    a = c;
    a = a+c;
    b = b-c;
    printf("%d\n%d\n%d\n ", a, b, c);

    return 0;
}