#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// 5마리의 고양이가 있음
// 아무키나 입력하여 랜덤으로 고양이를 뽑되
// 5마리의 고양이를 모두 뽑으면 됨
// 중복 발생 가능

// 고양이
// 이름, 나이, 성격, level정보

typedef struct 
{
    char * name;
    int age;
    char * charactor;
    int level;

}cat;

// 현재까지 보유한 고양이
int collection[5] = {0, 0, 0, 0, 0};

// 전체 고양이 리스트
cat cats[5];

void initCats(); // 고양이 정보 초기화

void printCat(int selected); 

int checkCollection();

int main(void)
{
    srand(time(NULL));

    initCats();

    while(1)
    {
        printf(" who cat?\n press any key ");
        getchar();

        int selected = rand() % 5; // 0 ~ 4s
        printCat(selected); // 뽑은 고양이 정보 출력
        collection[selected] = 1; // 고양이 뽑기 처리

        int collectAll = checkCollection();

        if (collectAll == 1 )
        {
            break;
        }

    }


    return 0; 
}

void initCats()
{
    cats[0].age = 5;
    cats[0].name = "Black";
    cats[0].charactor = "shy";
    cats[0].level = 1;

    cats[1].age = 2;
    cats[1].name = "cute";
    cats[1].charactor = "CUTE";
    cats[1].level = 2;

    cats[2].age = 3;
    cats[2].name = "didi";
    cats[2].charactor = "DIDI";
    cats[2].level = 3;
    
    cats[3].age = 4;
    cats[3].name = "kaka";
    cats[3].charactor = "KAKA";
    cats[3].level = 4;

    cats[4].age = 1;
    cats[4].name = "pig";
    cats[4].charactor = "PIG";
    cats[4].level = 5;
}

void printCat(int selected)
{
    printf("\n\n your Cat\n\n");
    printf("name      : %s\n", cats[selected].name);
    printf("age       : %d\n", cats[selected].age);
    printf("charactor : %s\n", cats[selected].charactor);
    printf("level     :");

    for (int i =0 ; i < cats[selected].level; i++ )
    {
        printf("%s","★");
    }
    printf("\n\n");
}
int checkCollection()
{
    // 보유한 고양이 목록도 출력하면서, 다 모았는지 여부를 반환
    int collectAll = 1;
    printf("\n\ncurrent Cat table\n\n");
    for(int i = 0 ;  i <5 ; i++)
    {
        if(collection[i] == 0) // 고양이가 없을때
        {
            printf("%s", "box is empty \n\n");
            collectAll = 0; // 다 모으지 못한 상태
        }
        else // 고양이가 있을 때
        {
            printf("%s", cats[i].name);
        }
    }
    printf("\n==========================\n\n");

    if (collectAll == 1)
    {
        printf("Coguraturation! get all cats\n\n");
    }
    return collectAll;
}