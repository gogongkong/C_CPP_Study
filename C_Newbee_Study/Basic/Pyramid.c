#include<stdio.h>

/*
피라미드를 쌓아라
예시
    *
   ***
  *****
 *******
*********
SSSS*
SSS***
SS*****
S*******
*********
*/

int main(void)
{
    int floor;
    printf("floor ? :");
    scanf("%d",&floor);

    for (int i = 0 ; i < floor ; i++)
    {
        for (int j = i ; j <= floor -1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k < i*2 +1 ; k ++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}