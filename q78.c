#include <stdio.h>
#include <string.h>
// 구조체
struct Result
{
	int length;
	int arr[10];
	int max;
	int min;
};

// 함수
struct Result find_max_min(struct Result data)
{
	data.max = data.arr[0];
	data.min = data.arr[0];

	for (int i = 0; i < data.length; i++)
	{
		if (data.arr[i] > data.max)
		{
			data.max = data.arr[i];
		}
		if (data.arr[i] < data.min)
		{
			data.min = data.arr[i];
		}
	}
	return data;
}

int main()
{
	/*
	10818 1차원배열 구조체/함수 사용
	*/

	// 구조체 선언
	struct Result resultS;

	printf("배열 길이 입력 : ");
	// int length = 0;
	scanf("%d", &resultS.length);

	printf("배열 입력 : \n");
	// int arr[10] = {0};
	// 배열안에 숫자 입력
	for (int i = 0; i < resultS.length; i++)
	{
		scanf("%d", &resultS.arr[i]);
	}

	// // 배열에서 최대 최소 찾기
	// resultS.max = resultS.arr[0];
	// resultS.min = resultS.arr[0];

	// for (int i = 0; i < resultS.length; i++)
	// {
	// 	if (resultS.arr[i] > resultS.max)
	// 	{
	// 		resultS.max = resultS.arr[i];
	// 	}
	// 	if (resultS.arr[i] < resultS.min)
	// 	{
	// 		resultS.min = resultS.arr[i];
	// 	}
	// }
	// 함수
	resultS = find_max_min(resultS);

	printf("최대:%d 최소:%d\n", resultS.max, resultS.min);

	return 0;
}
