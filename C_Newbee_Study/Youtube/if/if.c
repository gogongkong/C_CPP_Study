#include<stdio.h>

int main(void)
{
    // 버스를 탄다고 가정, 학생 / 일반인으로 구분
    // 일반인의 나이는 20세 이상으로 가정

    int age = 25;
    // if (조건) { ... } esle { ... }
    if (age >= 20)
    {
        printf("ilbanin\n");
    }
    else
    {
        printf("student\n");
    }

    // 초등학생 8 ~ 13 / 중학생 14 ~ 16 / 고등학생 17 ~ 19으로 나눈다면?
    // if / else if / else
    
    int age2 = 8;
    if(age2 >= 8 && age2 <= 13)
    {
        printf("element student\n");
    }
    else if(age2 >= 14 && age2 <= 16)
    {
        printf("middle student\n");
    }
    else if(age2 >= 17 && age2 <= 19)
    {
        printf("high student\n");
    }
    else
    {
        printf("ilbanin\n");
    }

    return 0;
}