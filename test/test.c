#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int a, b;
    printf("입력 : ");
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}