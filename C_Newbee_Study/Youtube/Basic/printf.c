#include<stdio.h>

int main(void)
{
    // printf
    // printf 내부에서 연산이 가능
    int add = 3 + 7; // 10
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 30, 79, 30 + 79);
    printf("%d x %d = %d\n", 30, 79, 30 * 79);
    return 0;
}