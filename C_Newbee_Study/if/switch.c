#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{

    // 가위0 바위1 보2
    srand(time(NULL));
    int i = rand() % 3;
    if ( i == 0)
        printf("sesor\n");
    else if( i == 1)
        printf("rock\n");
    else if( i == 2)
        printf("paper\n");
    else
        printf("i dont know");


    //switch (값)
    //{
    //    case 가위:
    //    case 바위:
    //    case 보:
    //    default:    
    //
    //가위0 바위1 보2
    srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("sesor\n"); break;
    case 1:printf("rock\n"); break;
    case 2:printf("paper\n"); break;
    default:printf("i dont know\n"); break;
    }
    
    int age = 9;
    switch (age)
    {
    case 8: 
    case 9: 
    case 10:
    case 11:
    case 12:
    case 13: printf("element student\n"); break;
    case 14:
    case 15:
    case 16: printf("middle student\n"); break;
    case 17:
    case 18:
    case 19: printf("hugh student\n"); break;
    default: printf("ilbanin\n"); break;
    
    }

    return 0;
}