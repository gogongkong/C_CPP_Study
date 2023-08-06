#include<cstdio>

int main() {

	// break, countinue
	for (; ;){//무한반복 for 
		printf("반복문 입니다 숫자를 입력하세요 : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			break;
		}
		printf("반복문의 마지막입니다.\n");
	}
	printf("프로그램이 종료됩니다.\n");

	// 중첩 반복문
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			printf("*");
		}
		printf("\n");
	}

	// 연습문제 1
	// 사용자로부터 숫자를 입력받아
	// 입력받은 크기만큼의 가로 세로 크기를 갖는 사각형을 만들자
	int input1;
	printf("숫자를 입력해주세요");
	scanf_s("%d", &input1);

	for (int i = 0; i < input1; i++){
		for (int k = 0; k < input1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	//연습문제 2
	//사용자로부터 숫자를 입력받아
	//입력받은 크기만큼의 가로 세로 크기를 갖는 직각 삼각형을 출력
	int input2;
	printf("숫자를 입력해주세요");
	scanf_s("%d", &input2);
	for (int i = 0; i < input2; i++) {
		for (int k = 0; k < i+1; k++) {
			printf("*");
		}
		printf("\n");
	}

	// 연습문제 3
	// 사용자로부터 숫자를 입력받아
	// 입력받은 크기만큼의 가로 세로크기를 같는 직각 역 삼각형을 출력
	int input3;
	printf("숫자를 입력해주세요");
	scanf_s("%d", &input3);
	for (int i = 0; i < input3; i++) {
		for (int k = 0; k < input3 - i; k++) {
			printf("*");
		}
		printf("\n");
	}

	// 연습문제 4
	// 연습문제 4를 반대방향으로 출력
	/*
	     *
	    **
	   ***
	  ****
	 *****
	 */
	int input4;
	printf("숫자를 입력해주세요");
	scanf_s("%d", &input4);
	for (int i = 0; i < input4; i++) {
		for (int j = 0; j < input4 - i -1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}