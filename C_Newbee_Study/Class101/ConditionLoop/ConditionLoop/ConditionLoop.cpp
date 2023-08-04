#include<cstdio>

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
	int num;
	printf("숫자를입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("A");
	}
	return 0;
}