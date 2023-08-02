#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(void)
{

    // Up and Down

    srand(time(NULL));
    // 1 ~ 100사이의 숫자
    int num = rand() % 100 + 1;
    printf("number : %d\n", num);

    int answer = 0; // 정답
    int chance = 5; // 기회

    while (chance > 0)
    {
        printf("nam eun chance : %d\n", chance--);
        printf("answer number(1 ~ 100) : ");
        scanf("%d",&answer);

        if (answer > num)
        {
            printf("Down \n\n");
        }
        else if (answer < num)
        {
            printf("Up \n\n");
        }
        else if (answer == num)
        {
            printf("collect\n");
            break;
        }
        else
        {
            printf("error!\n\n");
            break;
        }
        if (chance == 0)
        {
            printf("game over \n");
        }
    }

    return 0;
}