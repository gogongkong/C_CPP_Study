#include<stdio.h>

/* 함수는
    전달값 : 36
    함수 : ㅁ + 4
    반환형 : ?
 반환형 함수이름(전달값)
 {
    num + 4
 }

 ex))
 int, void, float, char와 같은 반환형 + 함수이름 + 입력값
 void의 경우 반환을 하지 않는다는 의미
 int 함수이름 (num)
 {
    return num + 4
 }
*/

// 선언
void p(int num);

int main(void)
{
    // Function
    // 계산기

    int num = 2;
    //printf("num = %d \n", num); // 2
    p(num);

    // 2 + 3 ??
    num = num + 3;
    //printf("num = %d \n", num); // 5
    p(num);
    
    // 5 -1 ?
    num -= 1;
    //printf("num = %d \n", num); // 4
    p(num);

    // 4 * 3?
    num *= 3;
    //printf("num = %d \n", num); // 12
    p(num);

    // 12 / 6 ?
    num /= 6;
    //printf("num = %d \n", num); // 2
    p(num);


    return 0;
}
// 정의
void p(int num)
{
    printf("num = %d \n", num); // 4

}

