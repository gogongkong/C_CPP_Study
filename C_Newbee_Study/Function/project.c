#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int getRandomNumber(int level);
void ShowQuestion(int level, int num1, int num2);

void success();
void FAIL();
int main(void)
{
    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
    // 맞히면 통과, 틀리면 실패
    srand(time(NULL));

    int count = 0;

    for (int i = 1 ; i <= 5 ; i ++)
    {
        // x * y = ? 
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);

        ShowQuestion(i, num1, num2);
        
        int answer = -1;
        scanf("%d", &answer);
        if(answer == -1)
        {
            printf("end!\n");
            exit(0); // 여기서 바로 프로그램 종료
        }
        else if (answer == num1 * num2)
        {
            success();
            count ++;
        }
        else
        {
            FAIL();
        }

    

    }
    printf("PASS : %d\n", count);

    return 0;
}


int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}
void ShowQuestion(int level, int num1, int num2)
{
    printf(" \n\n\n####### level %d #########\n", level);
    printf("\n\t%d * %d ?\n\n", num1, num2);
    printf("#####################################");
    printf("Password ?(end : -1) >> ");
}

void success()
{
    printf("PASS\n");
}

void FAIL()
{
    printf("FAIL\n");
}