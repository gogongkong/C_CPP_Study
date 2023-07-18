#include<stdio.h>

int main(void)
{
    // 포인터

    // [철수] : 101호  -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호
    // 각 문앞에 '암호'가 걸려있음
    int chul = 1;// 암호
    int young = 2;
    int min = 3;

    printf("cul = adress : %d, PW : %d\n", &chul, chul);
    printf("young = adress : %d, PW : %d\n", &young, young);
    printf("min = adress : %d, PW : %d\n", &min, min);

    // 미션맨 (포인터) !

    // 첫번째 미션 : 아파트의 각 집에 방문하여 문제 적힌 암호 확인
    int * man; // 포인터 변수
    man = &chul;
    printf("man address : %d , PW : %d\n", man, *man);

    man = &young;
    printf("man address : %d , PW : %d\n", man, *man);

    man = &min;
    printf("man address : %d , PW : %d\n", man, *man);

    // 두번째 미션 : 각 암호에 3을 곱하자
    man = &chul;
    *man = *man * 3;
    printf("man change address : %d , PW : %d\n", man, *man);

    man = &young;
    *man = *man * 3;
    printf("man change address : %d , PW : %d\n", man, *man);

    man = &min;
    *man = *man * 3;
    printf("man change address : %d , PW : %d\n", man, *man);


    // 스파이
    // 미션맨이 바꾼 암호에서 -2
    int *spy = man;
    printf("\n\n\n ...... spy mission \n\n\n");

    spy = &chul;
    *spy = *spy -2; // chul = chul -2 와 완전 동일
    printf("spy want address : %d, PW %d\n",spy, *spy);

    spy = &young;
    *spy = *spy -2; // chul = chul -2 와 완전 동일
    printf("spy want address : %d, PW %d\n",spy, *spy);

    spy = &min;
    *spy = *spy -2; // chul = chul -2 와 완전 동일
    printf("spy want address : %d, PW %d\n",spy, *spy);

    printf(" \n .......... chul, min, young is surprise because PW is change\n\n");
    printf("cul = adress : %d, PW : %d\n", &chul, chul);
    printf("young = adress : %d, PW : %d\n", &young, young);
    printf("min = adress : %d, PW : %d\n", &min, min);

    // 참고 : 미션맨의 주소도 있음
    printf("man's address : %d\n",&man);
    printf("spy's address : %d\n",&spy);

    // 배열과 포인터의 관계
    int arr[3] = {5, 10, 15};
    int * ptr = arr;

    for (int i = 0 ; i < 3 ; i++)
        printf("arr[%d] address : %d\n", i, arr[i]);

    for (int i = 0 ; i < 3 ; i++)
        printf("ptr[%d] address : %d\n", i, ptr[i]);
    
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for (int i = 0 ; i < 3 ; i++)
        printf("arr[%d] address : %d\n", i, arr[i]);

    for (int i = 0 ; i < 3 ; i++)
        printf("ptr[%d] address : %d\n", i, ptr[i]);
    // 이로써 알 수 있는 사실 ptr == arr
    for (int i = 0 ; i < 3 ; i++)
        printf("arr[%d] address : %d\n", i, *(arr + i)); // 이러한 표기방법도 있음 == arr의 주소값 부터 i번째 해당하는 녀석의 값을 가져옴 arr[i]와 완전 동일
    for (int i = 0 ; i < 3 ; i++)
        printf("ptr[%d] address : %d\n", i, *(ptr + i)); // 상동


    // *(arr + i) == arr[i]
    // arr = arr배열의 첫번째 값의 주소와 동일 == & arr[0]
    printf("\n\n\n\n arr address : %d\n", arr);
    printf("arr[0] address : %d\n",&arr[0]);

    printf(" arr's value's address of real value : %d\n", *arr); // *(arr+o)과 같다
    printf(" arr[0]'s real value : %d\n", *&arr[0]);
    // *& == 해당 변수의 주소의 값과 같은 의미라서 아무것도 안쓰는것과 같다
    // &는 주고이고 *는 그 주소의 값이다.
    // *&arr[0] == arr[0] = *&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]

    return 0;
}