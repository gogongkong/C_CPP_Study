#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 물고기가 6마리가 있음
// 어항에 살고 있고 사막이다.
// 사막이 건조하여 물이 빠르게 증발을 한다.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려야한다.
// 물고기는 시간이 지날수록 점점 커져서 나중에는 수확가능

int level;
int arrayFish[6];
int *cursor; // arrayFish를 가리키면서 몇번 어항에 물을 줄지 정함

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void)
{
    long startTime = 0; // 시작시간
    long totalElapsedTime = 0; // 총 경과시간
    long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

    int num; // 몇번 어항에 물을 줄것인지?
    initData();

    cursor = arrayFish; // cursor[0] ... cursor[1] ... cursor[5]
    startTime = clock(); // 현재 시간은 millisecond 단위로 반환 (1000분의 1초)

    while(1)
    {
        printfFishes();
        printf("what number you give water? ");
        scanf("%d",&num);

        // 입력값 체크
        if (num < 1 || num > 6)
        {
            printf(" that is wrong numver\n");
            continue;
        }

        // 총 경과 시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 1000단위로 나눌 수 있음
        printf(" total spend time : %ld sec\n", totalElapsedTime);

        // 직전에 물을 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
        prevElapsedTime = (totalElapsedTime - prevElapsedTime);
        printf("recent spend time : %ld sec\n",prevElapsedTime);

        // 어항의 물을 감소(증발)
        decreaseWater(prevElapsedTime);


        // 사용자가 입력한 어항에 물을 준다.
        // 1. 어항의 물이 0이면 --> 물을 주지 않는다 ==> 이미 고기가 죽음
        if(cursor[num-1] <= 0)
            printf("%d fish is dead, can't give water\n",num);
        // 2. 어항의 물이 0이 아닌경우 --> 물을 준다 (단 어항의 물이 100을 넘지 않는지 체크해야함)
        else if(cursor[num-1]+1 <= 100)
        {
            printf("%d fish give water \n\n",num);
            cursor[num-1] += 1;
        }

        // 레벨업을 할것인지 확인 (레벨업은 20초마다 한번씩 수행)
        if (totalElapsedTime / 20 > level - 1)
        {
            // 레벨업
            level++;
            printf(" Level Up ( Level %d -> %d )\n",level-1, level);

            // 최종 레벨 = 5
            if (level == 5)
            {
                printf("MAX Level! Game over\n\n");
                exit(0);
            }
        }

        // 모든 물고기가 죽었는지 확인 
        if (checkFishAlive() == 0)
        {
            // 물고기가 모두 죽음
            printf(" Fish All dead\n");
            exit(0);
        }
        else
        {
            // 최소 한마리의 물고기가 살아잇음
            printf("fish is alive\n");
        }
        prevElapsedTime = totalElapsedTime;
        // 10초 -> 15초( 5초 : prevElapsedTime -> 15초) -> 25초

    }
     

    return 0;
}

void initData()
{
    level = 1; // 게임레벨 1 ~ 5
    for (int i = 0 ; i < 6 ; i ++)
    {
        arrayFish[i] = 100; // 어항의 물높이 0 ~ 100
    }

}

void printfFishes()
{
    printf(" %3d %3d  %3d  %3d  %3d  %3d\n",1,2,3,4,5,6);
    for (int i = 0 ; i< 6 ; i++)
    {
        printf("%4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for (int i = 0 ; i < 6 ; i++)
    {
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3은 난이도 조절을 위한 값
        if (arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }

}

int checkFishAlive()
{
    for(int i = 0 ; i < 6 ; i++)
    {
        if (arrayFish[i] > 0)
            return 1;
    }
    return 0;
}