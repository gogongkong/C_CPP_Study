#include<cstdio>

int main() {

	/*
	�迭(Array)
	���� �������� �����Ǿ� �ִ� ����
	������ �޸� ���ο� �Ϸķ� ������ ������
	
	�迭 Ȱ�� ���
	������ ��� : int ������[�迭ũ��]
	Ȱ���� ��� : ������[�迭 ��ȣ]
	�迭��ȣ(�ε���)�� 0���� �����Ѵ�.
	ex) �迭ũ�Ⱑ 4�ϰ�� �ε��� : 0, 1, 2, 3
	*/
	
	int name[10];

	name[0] = 1;
	name[1] = 2;

	printf("%d\n", name[0]);


	int myArray[5] = { 1, 5, 10, 20, 100 };
	printf("%d\n", myArray[0]);

	for (int i = 0; i < 5; i++) {
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}

	int value[3] = { 1, 34, 100 };

	//value[3] = 10; �Ѱ踦 ������� �ȵȴ�.

	// �ε����� ������ �� �� �� �ִ�.
	int a = 2;
	printf("%d\n", value[a]);
	
	

	// ������ �迭
	int multiIndex[3][3];
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			multiIndex[i][k] = i * k;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("\n MultiIndex[%d][%d] = %d\n", i, k, multiIndex[i][k]);
		}
		printf("\n");
	}

	// ����� ���ÿ� ���� �Ҵ��� �� ������
	int multiIndex2[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};


	// �������� 1
	// ũ�Ⱑ 20�� �迭�� ����� ������ �迭 ���ҿ� 
	// 2, 4, 6, 8 ...�� ������ �Ҵ��Ͽ� �ش� �迭�� ����ϼ���(�ݺ����� �̿��Ұ�)
	int result[20];
	for (int i = 0; i < 20; i++) {
		if (i == 0) {
			result[i] = 2;
		}
		else {
			result[i] = result[i-1] + 2;
		}
	}

	for (int i = 0; i < 20; i++) {
		printf("result[%d] = %d\n", i, result[i]);
	}

	// �������� 2
	// ũ�Ⱑ 20�� �迭�� ����� ������ �迭 ���ҿ� �Ǻ���ġ ������ �Ҵ��Ͽ�
	// �ش� �迭�� ����ϼ���(�ݺ����� ����ϼ���)
	// �Ǻ���ġ ����
	// 1, 1, 2, 3, 5, 8, ......(i= (i-2) + (i-1))

	printf("��������2\n");

	int result2[20];
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			result2[i] = 1;
			printf("result2[%d] = %d\n", i, result2[i]);
		}
		else {
			result2[i] = result2[i - 2] + result2[i - 1];
			printf("result2[%d] = %d\n", i, result2[i]);
		}
	}

	// �������� 3
	// ũ�Ⱑ 10 x 10�� 2���� �迭�� ����� ������ �迭 ���ҿ�
	// ���Ҹ� 1 ~ 100���� �Ҵ��� �� 
	// �ش� �迭�� ����ϼ��� (�ݺ��� ���)
	printf("��������3\n");
	int arr[10][10];
	int count = 1;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			arr[i][k] = count;
			count++;
			printf("arr[%d][%d] = %d\n", i, k, arr[i][k]);
		}
	}

	// count ���� ����ϴ� ���
	int arr2[10][10];
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			arr[i][k] = (k+1) + (i*10);
			printf("arr[%d][%d] = %d\n", i, k, arr[i][k]);
		}
	}

	// �ݺ����� �ѹ��� ����ϴ� ���
	int arr3[10][10];
	for (int i = 0; i < 100; i++) {
		arr3[i / 10][i % 10] = i + 1;
	}

	// ����
	// ũ�Ⱑ 5x5�� ������ �迭 3���� �����
	// ù��° �迭�� 1, 2, 3, 4... ���� �Ҵ��ϰ�
	// �ι�° �迭�� 2, 4, 6, 8... ���� �Ҵ��ϸ�
	// �� �迭�� ������ �ε����� �����ϴ� ���ҵ��� ���� ����° �迭�� ������ ��
	// �ش� �迭�� ����ϼ��� ( �ݺ��� ��� )

	int data1[5][5];
	int data2[5][5];
	int data3[5][5];
	int cnt = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			data1[i][k] = (k + 1) + (i * 10);
			data2[i][k] = cnt * 2;
			cnt++;
			data3[i][k] = data1[i][k] + data2[i][k];
			printf("data1[%d][%d] = %d\n", i, k, data1[i][k]);
			printf("data2[%d][%d] = %d\n", i, k, data2[i][k]);
			printf("data3[%d][%d] = %d\n", i, k, data3[i][k]);

		}
	}

	// ����
	int datas1[5][5];
	int datas2[5][5];
	int datas3[5][5];
	int cnt2=1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			datas1[i][k] = cnt2;
			cnt2++;
		}
	}
	cnt2 = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			datas2[i][k] = cnt2 * 2;
			cnt2++;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			datas3[i][k] = datas1[i][k] + datas2[i][k];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d ", datas3[i][k]);
		}
		printf("\n");
	}
	return 0;
} 