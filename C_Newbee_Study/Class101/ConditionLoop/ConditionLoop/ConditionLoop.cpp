#include<cstdio>

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
	int num;
	printf("���ڸ��Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("A");
	}
	return 0;
}