#include<cstdio>

// 구조체(Struct) 
// 변수를 한데 묶어서 관리해줄 수 있는 일종의 변수의 집합
// 사용예시
// struct Person{
//		int age;
//		float salary;
//	};

struct Marine {
	int hp;
	int atk;
	int def;
};

int main() {

	// 실수 자료형 (float)
	// C언어에서는 실수 자료형에 대응하는 변수 타입이 있다 이를 float라고 하며
	// 변수나 함수의 타입 앞쪽에 작성하여 실수형 변수나 함수를 만들 수 있다.
	
	float myFloat = 3.14;
	printf("myFloat = %f\n", myFloat);
	printf("myFloat = %.2f\n", myFloat);

	float input;
	printf("실수 자료형을 입력하세요 : ");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%f", &input);

	printf("입력된 실수 : %f\n", input);

	// 형 변환 (Type-casting)
	// 서로 다른 데이터 형태를 바꿔서 일치 시켜주는 것
	// 변수 = (float)변수;
	
	int interger_number = 100;
	float real_number;

	real_number = interger_number;
	printf("%f\n", real_number);

	int number1 = 10;
	int number2 = 4;
	float result = number1 / number2;

	printf("%f\n", result); // 결과 : 2.0
	// 원인 : number1, number2는 정수이므로
	//		정수끼리 계산한 값을 실수형 변수에 저장했기 때문이다

	// 다른 유형
	float number3 = 10.0;
	float number4 = 0.1;
	int result2 = number3 - number4;
	printf("%d\n", result2); // 같은 이유로 정답 9.9에서 소숫점이 버려짐(result2 == int)

	// 형변환을 해서 올바른 답을 도출해보자
	int num1 = 10;
	int num2 = 4;
	float res1 = (float)num1 / (float)num2;
	//float res1 = (float)num1 / num2; 또다른 방법
	printf("%f\n", res1);
	// 형변환이 적절히 되지 않으면 의도하지 않은 결과가 도출될 수 있다.

	int number_1 = 100;
	float number_2 = 200.0;

	// "="기호에 의해 형변환이 자동적으로 되었다.
	// == 암묵적 변환(implicit)
	// 프로그래머가 명시하지 않아도 언어 자체에서 형변환을 자동으로 해주는 것
	number_1 = number_2;

	// 명시적 형변환 (Explicit)
	// 프로그래머가 명시하지 않으면 오류를 만들어 내는거 
	// 언어 자체에서 기술적으로 불가능 한것이 아니라
	// 경고의 의미를 내포하고 있음 (C#에서는 명시적 변환을 해줘야함)
	// 장단점이 있다. 명시적은 원치않는 결과가 나올 확률이 적다.

	printf("%d\n", number_1);


	// 구조체 (Structure) 사용법
	Marine m;
	m.atk = 6;
	m.hp = 40;
	m.def = 0;

	Marine m2;
	m2.atk = 6;
	m2.hp = 40 - 5;
	m2.def = 1;

	// 구조체는 배열로 사용이 가능하다
	Marine mar[10];
	mar[0].hp = 40;
	printf("%d\n", mar[0].hp);


	return 0;
}