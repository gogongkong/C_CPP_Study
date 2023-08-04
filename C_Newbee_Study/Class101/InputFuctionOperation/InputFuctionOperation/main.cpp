//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>


// 함수명 규칙
// 변수 이름 규칙과 동일하다
int inputFunction() {
	int input;
	printf("입력하세요: ");

	scanf_s("%d:", &input); // MAC 에서는 scanf 사용가능

	printf("입력된 값 : %d\n", input);
	return 0;
}
int myValue(int a, int b, int c) {
	return a + b / c;
}

int sum(int a, int b) {
	return a + b;
}

int squre(int a) {
	return a * a;
}

/*
int main(){...}
진입점 함수
C / C++에서 프로그램 시작시 자동으로 실행되는 함수
모든 C / C++ 프로그램은 main 함수가 존재한다.
*/
int main(){
	// 연산
	// + : 더하기
	// - : 빼기 
	// * : 곱하기 
	// / : 나누기
	// % : 나머지

	int value1 = 5 + 6;
	printf("%d\n", value1);

	int value2 = 10 - 24;
	printf("%d\n", value2);

	int value3 = 5 * 4;
	printf("%d\n", value3);

	int value4 = 10 / 2;
	printf("%d\n", value4);

	int value5 = 50 % 3;
	printf("%d\n", value5);

	// 연산자의 종류
	// 이항 연산자 : 피연산자가 두개 (a+b, a/b)
	// 단항 연산자 : 피연산자가 한대 (a++, a--)
	
	int valueAdd = 10;
	valueAdd++;
	printf("ValueAdd = %d\n", valueAdd);

	int valueSub = 50;
	valueSub--;
	printf("ValueSub = %d\n", valueSub);

	// 사용자 입력 - scanf(...);
	/* C/C++에서는 사용자로부터 입력을 받기 위해 scanf라는 구문을 활용한다.
	활용법은 printf와 비슷하지만, 변수의 앞에 &를 꼭 붙여줘야 한다.*/
	
	int input;
	printf("입력하세요: ");

	scanf_s("%d:", &input); // MAC 에서는 scanf 사용가능
	
	printf("입력된 값 : %d\n", input);
	
	/*
	함수(Function)
	입력을 받아 어떤 값을 만들어내는 동작을 하는 구문
	이 입력이란 사용자로부터 받는 입력이 아니며 
	프로그램 내부에서 파라미터로 받는 입력을 말한다.
	*/

	inputFunction();
	inputFunction();
	inputFunction();

	int value_1 = myValue(100, 200, 400);
	printf("%d\n", value_1);

	// 파라미터(Parameter)
	// 함수로 입력되는 값
	// 사용자가 키보드로 입력한 값이 아닌 함수 내부에서 변수처럼 동작
	// 갯수를 맞춰야 한다. 3개를 입력받으면 3개를 입력해야 한다.

	int X = -512;
	printf("'%d 입니다.\n'", X);

	int Y = sum(100, 101);
	printf("Sum함수를 사용한 변수 Y의 값은 %d 입니다.\n",Y);

	int Z = squre(4);
	printf("Squre함수를 사용한 변수 Z의 값은 %d 입니다.\n", Z);

	return 0;
}