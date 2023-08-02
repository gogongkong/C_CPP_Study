#include<stdio.h>

int main(void)
{
    //배열

    int subway_1 = 30; // 지하철 1호차에는 30명이 타고있음
    int subway_2 = 40;
    int subway_3 = 50;

    // 지하철은 여러량이 연속되어 있음

    printf("subway_1 : %d\n", subway_1);
    printf("subway_2 : %d\n", subway_2);
    printf("subway_3 : %d\n", subway_3);


    // ==파이썬의 리스트
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0 ; i < 3 ; i++)
    {
        printf("subway[%d] : %d\n", i+1, subway_array[i]);
    }


    // 값 설정 방법
    // 값을 초기화 하지 않으면 배열 안에 더미값이 들어가 있다.
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i <10; i++)
        printf("%d\n",arr[i]);

    // 배열 크기는 항상 상수로 선언 
    // int size = 10;
    // int arr[size]; // 오류발생 --> 직접 상수값을 집어넣어야 선언 가능


    // 더미값이 안 들어가는 경우 = 하나라도 값을 설정했을 경우
    int arr2[10] = {1, 2}; // 3번째 값부터는 자동으로 '0'으로 초기화된다.
    for (int i = 0; i <10; i++)
        printf("%d\n",arr2[i]);


    int arr3[] = {1, 2}; // == arr[2]와 같다. 설정한 값의 갯수를 파악해 자동으로 크기를 설정해줌 

    float arr_f[5] = {1.0f, 2.0f, 3.0f}; 
    for (int i = 0; i <5; i++)
        printf("%.2f\n",arr_f[i]);


    // 문자 vs 문자열
    // 문자는 한글자, 문자열은 한글자 이상

    char c = 'A';
    printf("%c\n", c);

    // 문자열 끝에는 끝을 의미하는 NULL문자(\0)이 포함되어 있다.
    char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
    printf("%s\n", str);

    char str2[] = "coding";
    printf("%s\n", str2);
    printf("%d\n", sizeof(str));

    for (int i = 0; i < sizeof(str2); i++)
    printf("%c\n",str2[i]);


    char kor[] = "한글";
    printf("%s\n", kor);
    printf("%d\n",sizeof(kor));
    // 영어는 한글자 1바이트
    // 한글은 한글자 2바이트
    // char = 1바이트
    
    char c_aray[7] = {'c','o','d','i','n','g','\0'};
    printf("%s\n",c_aray);

    char c_arrai[10] = {'c','o','d','i','n','g'};
    for(int i = 0 ; i < sizeof(c_arrai) ; i++)
    {
        printf("%c\n",c_arrai[i]);
    }
    // $d로 출력시 ASCII 코드로 출력됨
    for(int i = 0 ; i < sizeof(c_arrai) ; i++)
    {
        printf("%d\n",c_arrai[i]);
    }

    // 문자열 입력 받기 : 경찰서 조서 쓰기 예제
    // 사용하려는 문자열의 크기보다 넉넉하게 잡으면 사용상에 문제가 없음
    char name[256];
    printf("what's your name?\n");
    scanf("%s", name, sizeof(name));
    printf("%s\n",name);

    // 아스키코드
    // 7-bit, 128개 코드 (0~127)
    // ex) a = 97
    // ex) A = 65
    // ex) 0 = 8
    printf("%c\n", 'a');
    printf("%d\n", 'a');
    printf("%c\n", 'A');
    printf("%d\n", 'A');

    for (int i = 0 ; i < 128 ; i++)
        printf("%d = %c\n",i, i);

    return 0;
}