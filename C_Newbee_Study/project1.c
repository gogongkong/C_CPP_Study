#include<stdio.h>

int main(void)
{
    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 ( 조서 작성 )
    // 이름, 나이, 몸무게, 키, 범죄명
    char name[256];
    printf("what's your name? ");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("how old are you?");
    scanf_s("%d",&age);

    float weight;
    printf("weight?");
    scanf_s("%f", &weight);

    double high;
    printf("how tall?");
    scanf_s("%lf", &high);

    char criminal[256];
    printf("your criminal?");
    scanf_s("%s", criminal, sizeof(name));

    // 조서 내용 출력
    printf("\n\n ---- information ---- \n\n");
    printf("name : %s\n",name);
    printf("age : %d\n",age);
    printf("weight : %.2f\n",weight);
    printf("high : %.2lf\n",high);
    printf("crimainal : %s\n",criminal);
    
    return 0;
}