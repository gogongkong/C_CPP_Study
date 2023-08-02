#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{

    srand(time(NULL));
    printf("\n\n === father is no hair === \n\n");
    int answer; // 사용자 입력값 = 정답
    int treatment = rand() % 4; // 발모제 선택 0 ~ 3

    int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
    int prevCntBottle = 0; // 앞 게임에 보여준 병 갯수
    // 서로 보여주는 병 갯수를 다르게 하여 정답률 향상

    // 3번의 기회
    for (int i = 1 ; i <=3 ; i++)
    {
        int bottle[4] = {0, 0, 0, 0}; // 4개의 병
        do{
            cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 (0 ~1 +2 = 2 ~3)
        }while (cntShowBottle == prevCntBottle);
        prevCntBottle = cntShowBottle;
        int isincluded = 0;// 보여줄 병 중에 발모제가 포함되었는지 여부
        printf(" %d chance : ", i);

        // 보여줄 병 종류를 선택
        for (int j = 0; j < cntShowBottle ; j ++)
        {
            int randBottle = rand() % 4; // 0 ~ 3
            // 선택되지 않은 병이다
            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if (randBottle == treatment)
                {
                    isincluded = 1;
                }
            }
            // 이미 선택된 병이면 중복이므로 다시 선택
            else
            {
                j--;
            }
        }
        // 사용자에게 표시
        for (int k = 0 ; k < 4 ; k ++)
        {
            if(bottle[k] == 1)
                printf("%d", k+1);
        }
        printf(" treatment using\n");
        if (isincluded == 1)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }

        printf("\n one more chance?\n");
        getchar();// 사용자가 어떤 키를 입력할 때 까지 대기하는 용도로 사용
    }

    printf("\n\n What is treatment? \n\n");
    scanf("%d",&answer);

    if(answer == treatment+1)
    {
        printf("Success!");
    }
    else
    {
        printf("FAIL!!!\n collect answer is %d!",treatment+1);
    }

    return 0; 
}