#include<stdio.h>

int main(void)
{
    // 2중 반복문
    // for (int i = 1 ; i <= 3 ; i++)
    // {
    //     printf("first loop : %d\n", i);

    //     for (int j = 1 ; j <= 5 ; j++)
    //     {
    //         printf("    second loop : %d\n", j);
    //     }
    // }

    // 구구단 만들기
    // 2 X 1 = 2
    // 2 X 2 = 4
    // ...
    // 9 X 9 = 81
    // for (int i = 2; i < 10 ; i++)
    // {
    //     printf("%d Dan start!!!\n ",i);
    //     for (int j = 1; j < 10 ; j++)
    //     {
    //         printf("\r%d x %d = %d\n", i, j, i*j);
    //     }
    // }
    
    /*
    *
    **
    ***
    ****
    *****
    만들기
    */

   for (int i = 1 ; i <=5 ; i++)
   {
        for (int j = 1; j <= i ; j++)
            printf("*");
        printf("\n");
   }
/*
        *
       **
      ***
     ****
    *****
    만들기
    */

   for (int k = 0 ; k < 5 ; k++)
   {
        for (int l = k ; l < 5-1; l++)
        {
            printf(" ");
        }
        for (int m =  0 ; m <= k; m++)
        {
            printf("*");
        }
        printf("\n");
   }

    return 0;
}