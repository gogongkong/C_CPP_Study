#include<cstdio>

int main() {

	// break, countinue
	for (; ;){//���ѹݺ� for 
		printf("�ݺ��� �Դϴ� ���ڸ� �Է��ϼ��� : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			break;
		}
		printf("�ݺ����� �������Դϴ�.\n");
	}
	printf("���α׷��� ����˴ϴ�.\n");

	// ��ø �ݺ���
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			printf("*");
		}
		printf("\n");
	}

	// �������� 1
	// ����ڷκ��� ���ڸ� �Է¹޾�
	// �Է¹��� ũ�⸸ŭ�� ���� ���� ũ�⸦ ���� �簢���� ������
	int input1;
	printf("���ڸ� �Է����ּ���");
	scanf_s("%d", &input1);

	for (int i = 0; i < input1; i++){
		for (int k = 0; k < input1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	//�������� 2
	//����ڷκ��� ���ڸ� �Է¹޾�
	//�Է¹��� ũ�⸸ŭ�� ���� ���� ũ�⸦ ���� ���� �ﰢ���� ���
	int input2;
	printf("���ڸ� �Է����ּ���");
	scanf_s("%d", &input2);
	for (int i = 0; i < input2; i++) {
		for (int k = 0; k < i+1; k++) {
			printf("*");
		}
		printf("\n");
	}

	// �������� 3
	// ����ڷκ��� ���ڸ� �Է¹޾�
	// �Է¹��� ũ�⸸ŭ�� ���� ����ũ�⸦ ���� ���� �� �ﰢ���� ���
	int input3;
	printf("���ڸ� �Է����ּ���");
	scanf_s("%d", &input3);
	for (int i = 0; i < input3; i++) {
		for (int k = 0; k < input3 - i; k++) {
			printf("*");
		}
		printf("\n");
	}

	// �������� 4
	// �������� 4�� �ݴ�������� ���
	/*
	     *
	    **
	   ***
	  ****
	 *****
	 */
	int input4;
	printf("���ڸ� �Է����ּ���");
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