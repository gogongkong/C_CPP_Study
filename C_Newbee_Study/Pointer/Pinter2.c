#include<stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changearray(int * ptr);
int main(void)
{
    // SWAP
    int a = 10;
    int b = 20;
    printf(" address a : %d\n", &a);
    printf(" address b : %d\n", &b);



    // a와 b를 바꾼다.
    printf(" bfore Swap function => a : %d, b = %d\n",a, b);
    swap(a, b);
    printf(" after Swap function => a : %d, b = %d\n",a, b); 

    // 값에 의한 복사 (Call by Value) --> 값만 복사한다는 의미
    // 위의 SWAP 함수에 a와 b의 값만 준것이지 a와 b 자체를 준것은 아님

    // 해결 == 주소값을 주면 됨
    printf(" (give address) bfore Swap function => a : %d, b = %d\n",a, b);
    swap_addr(&a, &b);
    printf(" (give address) after Swap function => a : %d, b = %d\n",a, b);   


    // 배열일 때 arr2 -> 주소
    // 배열은 그 자체로 주소이기 떄문에 그대로 던져주면 된다.
    int arr2[3] = {10, 20, 30};
    //changearray(arr2);
    changearray(&arr2[0]);
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("%d\n",arr2[i]);
    }

    // scanf 에서 &num 이런식으로 &를 사용하는 이유를 알 수 있다.

    return 0;
}

void swap(int a, int b)
{
    printf(" inside Swap func address a : %d\n", &a);
    printf(" inside Swap func address b : %d\n", &b);
    int temp = a;
    a = b;
    b = temp;

    printf(" Swap function => a : %d, b = %d\n",a, b); 

}

void swap_addr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf(" (give address)Swap function => a : %d, b = %d\n",*a, *b); 

}

void changearray(int * ptr)
{
    ptr[2] = 50;
}