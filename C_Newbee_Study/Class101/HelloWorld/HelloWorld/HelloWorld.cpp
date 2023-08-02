#include<cstdio>

int main() {
	printf("HelloWorld\n");
	printf("안녕하세요\n");
	/*변수 : 기본형 데이터를 저장하는 저장공간
			변수를 만드는 것을 "변수 선언" 혹은 "정의" 라고 한다.
			변수 이름 짓기에는 규칙이 있고
			알파벳이나 언더바로 시작한다.*/
	int _name;
	// 두번째 문자부터는 숫자가 나와도 된다
	int c0mputer;
	int myspace100;
	// 키워드는 변수로 사용할 수 없다 ==> ex int, char
	// 공백, 특수문자를 넣을 수 없다.
	// 변수명은 유니크 해야한다.
	
	// 값의 할당
	int name = 100; //선언과 동시에 할당하였음
	int apple = 200;
	int minus = -500;
	
	int cherry;
	cherry = 200; // 선언 이후 할당 가능 
	cherry = 400; // 할당 이후 재정의 가능
	cherry = 3 * 7;
	minus = apple * 5;

	int value = (3 + 7) * 5; // 50

	printf("Value 에 저장된 값은 %d입니다, 체리는 %d 입니다.\n", value, cherry);



	return 0;
}