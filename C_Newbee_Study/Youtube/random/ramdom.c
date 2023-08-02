#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(void)
{
    //srand(time(NULL)); // 난수 초기화 : 랜덤 함수를 이용하기 위해서 필수적으로 사용해야함
    
    // rand(); 랜덤 수를 뽑을 수 있음
    // int num = rand() % 어떤 수;

    //int num = rand() % 3; // 0 ~ 2의 세개 중 하나를 랜덤으로 뽑음
    // int num = rand() % 3 + 1; // 1 ~ 3의 세개 중 하나를 랜덤으로 뽑음

    printf(" 난수 초기화 이전 pre reset\n");
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d", rand() % 10); // 1740948824 난수 초기화를 하지 않아서 항상 같은 숫자가 나옴
    }

    srand(time(NULL));
    printf(" \n\n난수 초기화 이후 after reset\n");
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d", rand() % 10); 
    }
    return 0;
}