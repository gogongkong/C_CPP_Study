#include<stdio.h>
#include<time.h>

    // 동물 카드 뒤집기 게임
    // 사용자로 부터 2개의 입력값을 받아서 --> 같은 동물을 찾으면 카드를 뒤집고 틀렸다면 원상복구
    // 모든 동물 쌍을 찾으면 게임 종료
    // 총 실패 횟수 알려주기

char *strAnimall[10];
int arrayAnimal[4][5]; // 카드 지도 (20장의 카드)
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인

void initAnimalArray();
void initAnimallName();
void shuffleAnimal();
void printAnimals();
void printQuestion();
int getEmptyPosition();
int conv_pos_y(int y);
int conv_pos_x(int x);


int main(void)
{
    srand(time(NULL));
    
    initAnimalArray();
    initAnimallName();

    shuffleAnimal();

    int failCount = 0; // 실패 횟수

    while(1)
    {
        int select1 = 0;// 사용자가 선택한 처음 수
        int select2 = 0;// 사용자가 선택한 두번째 수

        printAnimals(); // 동물 위치 출력
        printQuestion(); // 문제 출력
        printf(" choice card 2gae : ");
        scanf("%d %d", &select1, &select2);

        if (select1 == select2)
            continue;

        // 좌표에 해당하는 카드를 뒤집어 보고 같은지 다른지 확인
        // 정수 좌표를 x,y로 변환을 하였음
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        
        // 카드가 뒤집히지 않았는지(checkAniaml == 0) 확인과 동시에 두 동물이 같은지
        if (checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0
            &&
            arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])
        // 다른 동물인 경우
        else
    }


    return 0;
}

void initAnimalArray() 
{
    for (int i ; i < 4 ; i++)
    {
        for (int j ; j <5 ; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimallName()
{
    strAnimall[0] = "Monkey";
    strAnimall[1] = "Dog";
    strAnimall[2] = "Cat";
    strAnimall[3] = "Pig";
    strAnimall[4] = "Elephant";

    strAnimall[5] = "Gilin";
    strAnimall[6] = "Nakta";
    strAnimall[7] = "Tajoe";
    strAnimall[8] = "Hama";
    strAnimall[9] = "Tiger";
}
void shuffleAnimal()
{
    for (int i = 0 ; i < 10 ; i++)
    {
        for (int j = 0 ; j <2 ; j++)
        {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x] [y] = i;
        }
    }
}

// 좌표에서 빈공간 찾기
int getEmptyPosition()
{
    while(1)
    {
        int randPos = rand() % 20; // 0 ~ 19사이의 수 반환
        
        // if 19 --> (3,4)라고 변환해줘야함
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1)
        {
            return randPos;
        }
    }
    return 0;
}

int conv_pos_x(int x)
{
    // if 19 --> (3,4)라고 변환해줘야함
    // 5로 나눈다면?
    // 0  1  2  3  4 -> 0 0 0 0 0
    // 5  6  7  8  9 -> 1 1 1 1 1 
    //10 11 12 13 14 -> 2 2 2 2 2 
    //15 16 17 18 19 -> 3 3 3 3 3 
    return x / 5;

}
int conv_pos_y(int y)
{
    return y % 5;
}

void printAnimals()
{
    // 0  1  2  3  4 
    // 5  6  7  8  9 
    //10 11 12 13 14 
    //15 16 17 18 19 
    printf("==========Cheat============\n\n");
    for (int i =0 ; i <4 ; i ++)
    {
        for ( int j = 0 ; j <5 ; j ++)
        {
            printf("%8s",strAnimall[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("======================\n\n");
}
void printQuestion()
{
    printf("\n\n(Question)\n");
    int seq = 0;

    for (int i = 0; i < 4; i ++)
    {
        for(int j = 0 ; j <5 ; j++)
        {
            //정답을 맞췄다면? ' 동물이름' 출력
            if(checkAnimal[i][j] != 0)
            {
                printf("%8s", strAnimall[arrayAnimal[i][j]]);
            }
            // 오답일경우 => 뒷면 == 위치를 나타내는 숫자
            else
            {
                printf("%8d", seq);
            }

        }
    }
}