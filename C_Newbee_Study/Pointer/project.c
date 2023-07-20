#include<stdio.h>
#include<time.h>

// 물고기가 6마리 있음
// 어항에 살고 있는데, 사막임
// 사막이 너무 더워서, 너무 건조해서 물이 빨리 증발한다.
// 물이 다 증발 하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주자
// 물고기는 시간이 지날수록 점점 커지고 나중에는 먹는다.

int level;
int arrayFish[6];
int *cursor; // arrayFish를 가리키면서 어떤 물고기에게 물을 줄지

void printFishes();
void initData();


int main(void)
{
    long startTime = 0; // 게임 시작시간 정의
    long totalElapsedTime = 0; // 총 경과 시간
    long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

    int num; // 몇번 어항에 물을 줄것인지?
    initData();

    cursor = arrayFish; // cursor[0] .. cursor[1] .... 
    
    startTime = clock(); // 현재 시간을 100분의 1초 단위로 반환

    while(1)
    {
        printFishes();
        printf("give water do you wnat?\n");
        scanf("%d",&num);

        // 입력값 체크
        if (num <1 || num >6)
        { 
            printf(" wrong number\n");
            continue;
        }

        // 총 경과 시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf(" total spend time : %ds\n", totalElapsedTime);

        // 직전에 물을 준 시간 이후로 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf(" recent spend time : %lds\n", prevElapsedTime);

    }


    return 0;
}

void initData()
{
    level = 1; //(1 ~ 5)
    
    for (int i = 0 ; i < 6 ; i++)
    {
        arrayFish[i] = 100; // 어항 수위 0~100

    }

}

void printFishes()
{
    printf("%3d  %3d  %3d  %3d  %3d  %3d\n",1, 2, 3, 4, 5, 6);

    for (int i = 0 ; i < 6 ; i ++ )
    {
        printf("%4d ", arrayFish[i]);

    }
    printf("\n\n");
}
