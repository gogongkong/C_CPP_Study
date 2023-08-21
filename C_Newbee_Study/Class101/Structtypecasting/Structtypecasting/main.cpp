#include<cstdio>

// ����ü(Struct) 
// ������ �ѵ� ��� �������� �� �ִ� ������ ������ ����
// ��뿹��
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

	// �Ǽ� �ڷ��� (float)
	// C������ �Ǽ� �ڷ����� �����ϴ� ���� Ÿ���� �ִ� �̸� float��� �ϸ�
	// ������ �Լ��� Ÿ�� ���ʿ� �ۼ��Ͽ� �Ǽ��� ������ �Լ��� ���� �� �ִ�.
	
	float myFloat = 3.14;
	printf("myFloat = %f\n", myFloat);
	printf("myFloat = %.2f\n", myFloat);

	float input;
	printf("�Ǽ� �ڷ����� �Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%f", &input);

	printf("�Էµ� �Ǽ� : %f\n", input);

	// �� ��ȯ (Type-casting)
	// ���� �ٸ� ������ ���¸� �ٲ㼭 ��ġ �����ִ� ��
	// ���� = (float)����;
	
	int interger_number = 100;
	float real_number;

	real_number = interger_number;
	printf("%f\n", real_number);

	int number1 = 10;
	int number2 = 4;
	float result = number1 / number2;

	printf("%f\n", result); // ��� : 2.0
	// ���� : number1, number2�� �����̹Ƿ�
	//		�������� ����� ���� �Ǽ��� ������ �����߱� �����̴�

	// �ٸ� ����
	float number3 = 10.0;
	float number4 = 0.1;
	int result2 = number3 - number4;
	printf("%d\n", result2); // ���� ������ ���� 9.9���� �Ҽ����� ������(result2 == int)

	// ����ȯ�� �ؼ� �ùٸ� ���� �����غ���
	int num1 = 10;
	int num2 = 4;
	float res1 = (float)num1 / (float)num2;
	//float res1 = (float)num1 / num2; �Ǵٸ� ���
	printf("%f\n", res1);
	// ����ȯ�� ������ ���� ������ �ǵ����� ���� ����� ����� �� �ִ�.

	int number_1 = 100;
	float number_2 = 200.0;

	// "="��ȣ�� ���� ����ȯ�� �ڵ������� �Ǿ���.
	// == �Ϲ��� ��ȯ(implicit)
	// ���α׷��Ӱ� ������� �ʾƵ� ��� ��ü���� ����ȯ�� �ڵ����� ���ִ� ��
	number_1 = number_2;

	// ����� ����ȯ (Explicit)
	// ���α׷��Ӱ� ������� ������ ������ ����� ���°� 
	// ��� ��ü���� ��������� �Ұ��� �Ѱ��� �ƴ϶�
	// ����� �ǹ̸� �����ϰ� ���� (C#������ ����� ��ȯ�� �������)
	// ������� �ִ�. ������� ��ġ�ʴ� ����� ���� Ȯ���� ����.

	printf("%d\n", number_1);


	// ����ü (Structure) ����
	Marine m;
	m.atk = 6;
	m.hp = 40;
	m.def = 0;

	Marine m2;
	m2.atk = 6;
	m2.hp = 40 - 5;
	m2.def = 1;

	// ����ü�� �迭�� ����� �����ϴ�
	Marine mar[10];
	mar[0].hp = 40;
	printf("%d\n", mar[0].hp);


	return 0;
}