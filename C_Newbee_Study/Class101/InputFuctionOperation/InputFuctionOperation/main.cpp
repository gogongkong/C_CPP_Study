//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>


// �Լ��� ��Ģ
// ���� �̸� ��Ģ�� �����ϴ�
int inputFunction() {
	int input;
	printf("�Է��ϼ���: ");

	scanf_s("%d:", &input); // MAC ������ scanf ��밡��

	printf("�Էµ� �� : %d\n", input);
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
������ �Լ�
C / C++���� ���α׷� ���۽� �ڵ����� ����Ǵ� �Լ�
��� C / C++ ���α׷��� main �Լ��� �����Ѵ�.
*/
int main(){
	// ����
	// + : ���ϱ�
	// - : ���� 
	// * : ���ϱ� 
	// / : ������
	// % : ������

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

	// �������� ����
	// ���� ������ : �ǿ����ڰ� �ΰ� (a+b, a/b)
	// ���� ������ : �ǿ����ڰ� �Ѵ� (a++, a--)
	
	int valueAdd = 10;
	valueAdd++;
	printf("ValueAdd = %d\n", valueAdd);

	int valueSub = 50;
	valueSub--;
	printf("ValueSub = %d\n", valueSub);

	// ����� �Է� - scanf(...);
	/* C/C++������ ����ڷκ��� �Է��� �ޱ� ���� scanf��� ������ Ȱ���Ѵ�.
	Ȱ����� printf�� ���������, ������ �տ� &�� �� �ٿ���� �Ѵ�.*/
	
	int input;
	printf("�Է��ϼ���: ");

	scanf_s("%d:", &input); // MAC ������ scanf ��밡��
	
	printf("�Էµ� �� : %d\n", input);
	
	/*
	�Լ�(Function)
	�Է��� �޾� � ���� ������ ������ �ϴ� ����
	�� �Է��̶� ����ڷκ��� �޴� �Է��� �ƴϸ� 
	���α׷� ���ο��� �Ķ���ͷ� �޴� �Է��� ���Ѵ�.
	*/

	inputFunction();
	inputFunction();
	inputFunction();

	int value_1 = myValue(100, 200, 400);
	printf("%d\n", value_1);

	// �Ķ����(Parameter)
	// �Լ��� �ԷµǴ� ��
	// ����ڰ� Ű����� �Է��� ���� �ƴ� �Լ� ���ο��� ����ó�� ����
	// ������ ����� �Ѵ�. 3���� �Է¹����� 3���� �Է��ؾ� �Ѵ�.

	int X = -512;
	printf("'%d �Դϴ�.\n'", X);

	int Y = sum(100, 101);
	printf("Sum�Լ��� ����� ���� Y�� ���� %d �Դϴ�.\n",Y);

	int Z = squre(4);
	printf("Squre�Լ��� ����� ���� Z�� ���� %d �Դϴ�.\n", Z);

	return 0;
}