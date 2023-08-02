#include<stdio.h>

int main(void)
{
    // // break, continue
    // // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 한다.
    // for (int i = 1 ; i <= 30 ; i++)
    // {
    //     if (i >= 6)
    //     {
    //         printf("go home\n");
    //         break;
    //     }
    //     printf("%d bun balpyo junby\n", i); 
    // }


    // 1 ~ 30번 반에서 7번은 병결
    // 7번 제외 6번부터 10번까지 조별 발표
    // for (int i = 1 ; i <= 30 ; i ++)
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if(i == 7)
    //         {
    //             printf("%d student is sick \n", i);
    //             continue;
    //         }
    //         printf("%d student team speech \n", i);
    //     }
    // }

    // && : and, || : or
    int a = 10;
    int b = 10;
    int c = 11;
    int d = 13;
    if (a == b || c == d)
    {
        printf("a == b or c == d\n");
    }
    else
        printf("a != b and c != d\n");
    return 0;
}