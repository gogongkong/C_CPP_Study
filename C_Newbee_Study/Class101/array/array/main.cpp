#include<cstdio>

int main() {

	/*
	배열(Array)
	변수 여러개가 나열되어 있는 형태
	실제로 메모리 내부에 일렬로 나열된 데이터
	
	배열 활용 방법
	선언의 경우 : int 변수명[배열크기]
	활용의 경우 : 변수명[배열 번호]
	배열번호(인덱스)는 0부터 시작한다.
	ex) 배열크기가 4일경우 인덱스 : 0, 1, 2, 3
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

	//value[3] = 10; 한계를 벗어나서는 안된다.

	// 인덱스에 변수가 들어갈 수 도 있다.
	int a = 2;
	printf("%d\n", value[a]);
	
	

	// 다차원 배열
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

	// 선언과 동시에 값을 할당할 수 도있음
	int multiIndex2[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};


	// 연습문제 1
	// 크기가 20인 배열을 만들고 각각의 배열 원소에 
	// 2, 4, 6, 8 ...의 수열을 할당하여 해당 배열을 출력하세요(반복문을 이용할것)
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

	// 연습문제 2
	// 크기가 20인 배열을 만들고 각각의 배열 원소에 피보나치 수열을 할당하여
	// 해당 배열을 출력하세요(반복문을 사용하세요)
	// 피보나치 수열
	// 1, 1, 2, 3, 5, 8, ......(i= (i-2) + (i-1))

	printf("연습문제2\n");

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

	// 연습문제 3
	// 크기가 10 x 10인 2차원 배열을 만들고 각각의 배열 원소에
	// 원소를 1 ~ 100까지 할당한 후 
	// 해당 배열을 출력하세요 (반복문 사용)
	printf("연습문제3\n");
	int arr[10][10];
	int count = 1;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			arr[i][k] = count;
			count++;
			printf("arr[%d][%d] = %d\n", i, k, arr[i][k]);
		}
	}

	// count 없이 사용하는 방법
	int arr2[10][10];
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			arr[i][k] = (k+1) + (i*10);
			printf("arr[%d][%d] = %d\n", i, k, arr[i][k]);
		}
	}

	// 반복문을 한번만 사용하는 방법
	int arr3[10][10];
	for (int i = 0; i < 100; i++) {
		arr3[i / 10][i % 10] = i + 1;
	}

	// 과제
	// 크기가 5x5인 이차원 배열 3개를 만들고
	// 첫번째 배열은 1, 2, 3, 4... 으로 할당하고
	// 두번째 배열은 2, 4, 6, 8... 으로 할당하며
	// 두 배열의 동일한 인덱스에 존재하는 원소들의 합을 세번째 배열에 저장한 후
	// 해당 배열을 출력하세요 ( 반복문 사용 )

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

	// 정답
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