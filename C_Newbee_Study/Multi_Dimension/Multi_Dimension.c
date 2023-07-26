#include<stdio.h>

int main(void)
{
    // 다차원 배열
    int i; // 메모리 공간에 하나만큼의 크기를 차지
    int arr[5];// 5개의 공간을 차지

    //다차원 배열
    int arr2[2][5]; // 2차원 배열 5칸씩 2줄 --> 표현은 파이썬과 동일 arr[1][2] 이런식으로
    // 3차원 배열도 가능
    int arr3[3][3][3];

    // 선언
    int arr_2[2][5] = {
        {1,2,3,4,5}, 
        {1,2,3,4,5}
        }; // 괄호로 한번 더 감싸면 된다. 보기 쉽게 엔터쳐서 행렬 처럼 보기도 가능하다.

    int arr_3[4][2] = {
        {1,2},
        {1,2},
        {1,2},
        {1,2}
        };

    int arr_4[3][3][3] = {{{1,2,3},{1,2,3},{1,2,3}}, {{1,2,3},{1,2,3},{1,2,3}}, {{1,2,3},{1,2,3},{1,2,3}}}; // 3차원 배열 선언법
    

    // 다차원 배열 사용해보기
    // arr_3를 표현해보자
    for (int i = 0 ; i <4 ; i++)
    {
        for (int j =0 ; j<2 ; j++)
        {
            printf("arr_3[%d][%d] = %d\n ", i+1, j+1, arr_3[i][j]);
        }
        printf("\n");
    }

    
    
    
    
    
    return 0;
}