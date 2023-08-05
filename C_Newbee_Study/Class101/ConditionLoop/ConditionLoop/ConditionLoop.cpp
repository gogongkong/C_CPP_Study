#include<cstdio>

int getInput() {
	int num;
	printf("숫자를입력하세요 : ");
	fseek(stdin, 0, SEEK_END);// scanf가 입력된 값을 잘못 해석하는 경우가 생긴다 그걸 방지하기 위해 아래의 코드를 작성한다.
	scanf_s("%d", &num);
	return num;
}

int main() {
	/*
	조건문 / 반복문
	조건문 : 조건에 의해 실행되는 구문을 지정
	반복문 : 조건이 "참" 이라면 반복하는 구문을 지정
	*/

	// 논리 연산자 
	// && : and
	// || : or
	// 비교 연산자
	// ==, !=, >, <, >=, <=

	/*
	조건문 기본
	if (조건) {
		코드
	}
	else if (조건){
		코드
	}
	else{
		코드
	}
	*/

	int value1 = 1;
	int value2 = 2;
	int value3 = 10;
	int value4 = 20;

	if (value1 == value2 && value3 == value4) {
		printf("value1과 value2는 서로 같습니다. 그리고 value3과 value4는 같습니다.\n");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1은 value2보다 크거나 value3은 value4보다 작습니다.\n");
	}
	else if (value1 != value2 && value3 != value4) {
		printf("value1과 value2는 다르고, value3과 value4는 다릅니다.\n");
	}
	else {
		printf("value1은 value2보다 작습니다.\n");
	}


	/*
	반복문
	while(조건){
		반복할 코드
	}

	for (구문1 ; 조건 ; 구문2){
		반복할 코드
	}
	*/

	int count = 0;
	for (int i = 0; i < 100; i++) {
		count = count + 10;
	}
	printf("count = %d\n", count);

	// 연습프로그래밍
	// 사용자로부터 숫자를 입력받아
	// 입력받은 숫자만큼 A를 출력하는 프로그램 작성
	int num = getInput();

	if (num <= 0) {
		printf("숫자를 잘 못 입력하였습니다.\n");
	}
	else {
		for (int i = 0; i <= num; i++) {
			printf("A");
		}
	}
	printf("\n");

	num = getInput();
	if (num <= 0) {
		printf("숫자를 잘못 입력하였습니다.\n");
	}
	else {
		for (int i = 0; i < num; i++) {
			printf("B");
		}
	}
	printf("\n");

	int input1, input2, operation;

	printf("input first number : ");
	scanf_s("%d", &input1);

	printf("input second number : ");
	scanf_s("%d", &input2);

	printf("Operation Number? : ");
	scanf_s("%d", &operation);

	if (operation == 0) {
		printf("%d\n", input1 + input2);
	}
	else if (operation == 1) {
		printf("%d\n", input1 - input2);
	}
	else if (operation == 2) {
		int a = input1;
		for (int i = 0; i < input2; i++) {
			a = a * input1;
		}
		printf("%d\n", a);
	}
	else {
		printf("잘못된 숫자입니다.\n");
	}
	return 0;
}