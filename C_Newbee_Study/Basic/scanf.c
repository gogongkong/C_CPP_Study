#include<stdio.h>

int main(void)
{
    // scanf
    // 키보드에서 입력을 받아서 저장
    // int input;
    // printf("값을 입력하세요 : ");
    // scanf_s("%d",&input);
    // printf("입력값은 %d\n", input);

    // int one, two, three;
    // printf("3gae int input : ");
    // scanf_s("%d %d %d", &one, &two, &three);
    // printf("first : %d\n", one);
    // printf("second : %d\n", two);
    // printf("three : %d\n", three);

    // 문자(한글자), 문자열(한글자 이상의 여러글자)
    char c = 'A';
    printf("%c\n", c);

    // str에다가 256글자를 넣을 수 있게 메모리 할당
    char str[256];
    scanf_s("%s", str, sizeof(str));
    printf("%s\n",str);
    
    return 0;
}
