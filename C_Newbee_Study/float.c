#include<stdio.h>
int main(void)
{
    // 실수형 변수에 대한 예제
    float f = 46.5f;
    printf("%f\n", f);
    // 출력 값 : 46.500000
    
    printf("%.2f\n", f);
    // 소숫점 2번째 까지만 출력
    // 출력 값 : 46.50

    double d = 4.428;
    printf("%.2lf\n", d);
    // 실수형에는 double형도 있음
    // 출력 값 : 4.43
    return 0;

}