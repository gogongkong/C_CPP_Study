#include<stdio.h>
int main(void)
{
    /* 상수형 변수
    한번 정의하면 바꿀 수 없음 보통 대문자로 정의*/

    const int YEAR = 2000;
    printf("태어난 연도 : %d\ n", YEAR);
    //YEAR = 2001; 바꿀 수 없다.
    
    return 0;

}