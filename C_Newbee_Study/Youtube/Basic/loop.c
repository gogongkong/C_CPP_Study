#include <stdio.h>

int main(void)
{
    // // ++ 연산자
    // int a = 10;
    // printf("a= %d\n", a);
    // a++;
    // printf("a= %d\n", a);
    // a++;
    // printf("a= %d\n", a);

    // int b = 20;
    // // ++b --> b + 1
    // printf("b= %d\n", ++b);
    // // b++ --> 문장을 수행하고 나서 그 다음줄부터 b + 1하기
    // printf("b= %d\n", b++);
    // // 이전 문장에서 b++이었음으로 21 + 1
    // printf("b= %d\n", b);
    
    // // for
    // int i = 1;
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("i = %d\n", i);
    // /*Hello World 1
    // Hello World 2
    // Hello World 3
    // Hello World 4
    // Hello World 5
    // Hello World 6
    // 7*/

    // 반복문
    // for, while, do while이 있음
    // 형식 for(선언 ; 조건 ; 증감)
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        printf("for : Hello %d\n", i);
    }

    // while 
    // 형식 : while (조건) {}
    int i = 1;
    while (i <= 10)
    {
        printf("while : Hello %d\n", i++);
        //i ++;
    }

    // do while
    // 형식 : do {} while (조건);
    int j = 1;
    do {
        printf("do while : Hello %d\n", j++);
    }while (j <= 10);

    return 0;  
}