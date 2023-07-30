#include<stdio.h>

// 구조체(Struct)는 전역변수로 선언된다.
// 변수 선언부까지만 작성하면 된다. 
struct Gameinfo {
    char * name;
    int year;
    int price;
    char * company;

    struct Gameinfo * friendGame; // 연관 업체 게임
};
// 구조체와 typedef의 콜라보 
typedef struct Gameinformation {
    char * name;
    int year;
    int price;
    char * company;

    struct Gameinfo * friendGame; // 연관 업체 게임
} GAME_INFO;


int main(void)
{
    // 게임을 출시했다고 가정
    // 이름 : 나도 게임
    // 2017년 발매
    // 50원
    // 제작사 : 나도 회사

    char * name1 = "i am game";
    int year1 = 2017;
    int price1 = 50;
    char * company1 = "i am company";

    // 이름 : 너도 게임
    // 2017년 발매
    // 100원
    // 제작사 : 너도 회사

    char * name2 = "you are game";
    int year2 = 2017;
    int price2 = 100;
    char * company2 = "you are company";

    // 비슷한 관련있는 정보가 변수 따로따로 관리되어있음
    // 이때 필요한것이 구조체
    // 구조체는 전역변수로 선언된다
    // 구조체 사용
    struct Gameinfo Gameinfo1;
    Gameinfo1.name = "i am game";
    Gameinfo1.year = 2017;
    Gameinfo1.price = 50;
    Gameinfo1.company = "i am company";

    // 구조체 출력
    printf("=== gmae info ===\n");
    printf("name : %s\n",Gameinfo1.name);
    printf("year : %d\n",Gameinfo1.year);
    printf("price : %d\n",Gameinfo1.price);
    printf("company : %s\n",Gameinfo1.company);


    // 구조체 초기화를 배열처럼 초기화
    struct Gameinfo Gameinfo2 = {"you are gmae", 2017, 100, "you are company"};
    // 출력
    printf("=== gmae info ===\n");
    printf("name : %s\n",Gameinfo2.name);
    printf("year : %d\n",Gameinfo2.year);
    printf("price : %d\n",Gameinfo2.price);
    printf("company : %s\n",Gameinfo2.company);


    // 구조체 배열 선언법 == 비슷하다.
    struct Gameinfo gameArray[2] = {
        {"i am gmae", 2017, 50, "i am company"},
        {"you are gmae", 2017, 100, "you are company"}
        };

    // 구조체 포인터
    struct Gameinfo * gameptr;
    gameptr = &Gameinfo1;
    // 구조체 포인터 출력
    // printf("\n\n=== Pointer gmae info ===\n");
    // printf("name : %s\n",(*gameptr).name); //int = *ptr
    // printf("year : %d\n",(*gameptr).year);
    // printf("price : %d\n",(*gameptr).price);
    // printf("company : %s\n",(*gameptr).company);    

    // 출력방법 2
    printf("\n\n=== Pointer gmae info ===\n");
    printf("name : %s\n",gameptr->name); //int = *ptr
    printf("year : %d\n",gameptr->year);
    printf("price : %d\n",gameptr->price);
    printf("company : %s\n",gameptr->company);  

    // 구조체 안의 구조체
    Gameinfo1.friendGame = &Gameinfo2;
    printf("\n\n=== another game info ===\n");
    printf("name : %s\n",Gameinfo1.friendGame->name); //int = *ptr
    printf("year : %d\n",Gameinfo1.friendGame->year);
    printf("price : %d\n",Gameinfo1.friendGame->price);
    printf("company : %s\n",Gameinfo1.friendGame->company);  

    
    // typedef
    // 자료형의 이름(별명)을 지정
    int i = 1;
    typedef int iiii;
    iiii integer = 3;
    typedef float ffff;
    ffff floating = 3.23f;
    printf("\n\nint = %d, float = %.2f \n", integer, floating);


    // 구조체와 콜라보
    // 아래 방식으로 모두 사용가능하다.
    typedef struct Gameinfo game;
    game game1;
    game1.name = "coding";
    game1.year = 2015;

    GAME_INFO gmae2;
    gmae2.name = "coding2";
    gmae2.year = 2024;
    
    struct Gameinformation game3;

    return 0;
}