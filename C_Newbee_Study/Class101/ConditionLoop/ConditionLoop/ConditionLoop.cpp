#include<cstdio>

int getInput() {
	int num;
	printf("���ڸ��Է��ϼ��� : ");
	fseek(stdin, 0, SEEK_END);// scanf�� �Էµ� ���� �߸� �ؼ��ϴ� ��찡 ����� �װ� �����ϱ� ���� �Ʒ��� �ڵ带 �ۼ��Ѵ�.
	scanf_s("%d", &num);
	return num;
}

int main() {
	/*
	���ǹ� / �ݺ���
	���ǹ� : ���ǿ� ���� ����Ǵ� ������ ����
	�ݺ��� : ������ "��" �̶�� �ݺ��ϴ� ������ ����
	*/

	// �� ������ 
	// && : and
	// || : or
	// �� ������
	// ==, !=, >, <, >=, <=

	/*
	���ǹ� �⺻
	if (����) {
		�ڵ�
	}
	else if (����){
		�ڵ�
	}
	else{
		�ڵ�
	}
	*/

	int value1 = 1;
	int value2 = 2;
	int value3 = 10;
	int value4 = 20;

	if (value1 == value2 && value3 == value4) {
		printf("value1�� value2�� ���� �����ϴ�. �׸��� value3�� value4�� �����ϴ�.\n");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1�� value2���� ũ�ų� value3�� value4���� �۽��ϴ�.\n");
	}
	else if (value1 != value2 && value3 != value4) {
		printf("value1�� value2�� �ٸ���, value3�� value4�� �ٸ��ϴ�.\n");
	}
	else {
		printf("value1�� value2���� �۽��ϴ�.\n");
	}


	/*
	�ݺ���
	while(����){
		�ݺ��� �ڵ�
	}

	for (����1 ; ���� ; ����2){
		�ݺ��� �ڵ�
	}
	*/

	int count = 0;
	for (int i = 0; i < 100; i++) {
		count = count + 10;
	}
	printf("count = %d\n", count);

	// �������α׷���
	// ����ڷκ��� ���ڸ� �Է¹޾�
	// �Է¹��� ���ڸ�ŭ A�� ����ϴ� ���α׷� �ۼ�
	int num = getInput();

	if (num <= 0) {
		printf("���ڸ� �� �� �Է��Ͽ����ϴ�.\n");
	}
	else {
		for (int i = 0; i <= num; i++) {
			printf("A");
		}
	}
	printf("\n");

	num = getInput();
	if (num <= 0) {
		printf("���ڸ� �߸� �Է��Ͽ����ϴ�.\n");
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
		printf("�߸��� �����Դϴ�.\n");
	}
	return 0;
}