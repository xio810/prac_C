#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("배열 안에서 두번째로 큰 수 출력하기\n");

	int arr[5] = {10, 0, 0, 0, 0};
	int length = 5;

	// 가장 큰 수, 두번째 큰 수 변수 생성
	int max1 = arr[0]; // 가장큼
	int max2 = -1;	   // 두번째큼

	for (int i = 1; i < length; i++)
	{
		// max1=10
		if (max1 < arr[i]) //  10하고40비교
		{
			max2 = max1;   // max2는 두번째 큰 수. arr[0]=10임. max2에 10넣기
			max1 = arr[i]; // max1은 40이 됨. max1에 40넣기
		}
		else if (max1 > arr[i]) // max1=40 > arr[2]=5
		{
			if (max2 < arr[i]) // 40>5임. max2는10. 10보다 큰 수 나오면
			{

				max2 = arr[i]; // 현재 max2는 10
			}
		}
	}

	printf("가장 큰 수: %d\n", max1);
	if (max2 == -1)
	{
		printf("두 번째로 큰 수 : 없음\n");
	}
	else
	{

		printf("두 번째로 큰 수: %d\n", max2);
	}

	return 0;
}
