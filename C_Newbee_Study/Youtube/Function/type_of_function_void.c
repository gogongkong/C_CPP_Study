# include<stdio.h>

void p(int num);

void function_without_return();

void fuction_without_params();

void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // 전체 total 개에서 ate를 먹고 남은 수 반환

int function_with_return();

int main(void)
{
    // 반환값이 없는 함수
    function_without_return();

    // 반환값이 있는 함수
    int ret = function_with_return();
    p(ret);

    // 파라미터(전달값)가 없는 함수
    fuction_without_params();

    // 파라미터(전달값)가 있는 함수
    function_with_params(35, 27, 13);

    // 반환값과 전달값이 있는 함수
    int ret2 = apple(5, 2); // 5개의 사과 중에서 2개를 먹었음
    printf("apple 5, ate 2 : %d remain",ret2);

    // 직접적으로 함수를 넣어서 printf할 수 있음
    printf("apple %d //// ate %d? === %d remain\n", 10, 4, apple(10, 4));

    return 0;
}

void function_without_return()
{
    printf("no return function\n");
}

int function_with_return()
{
    printf("return is true");
    return 10;
}

void fuction_without_params()
{
    printf("parameter is nothing\n");
}


void function_with_params(int num1, int num2, int num3)
{
    printf("param is true, param is %d, %d, %d \n", num1, num2, num3);
}


int apple(int total, int ate)
{
    printf("return : True, params : True\n");
    return total - ate;
}

void p(int num)
{
    printf("num = %d \n", num); // 4

}