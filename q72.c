#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* printf("배열 안에서 두번째로 큰 수 출력하기\n");

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
 */

	/* printf("숫자 반대로 출력 : ");

	int arr[5] = {1, 2, 3, 4, 5};
	int length = 5;
	int temp = 0;

	for (int i = 0; i < length / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}

	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	} */

	/* printf("문자열연습\n");
	// 문자열 입력 %s
	char str[100];
	scanf("%s", str); */

	/* // 알파벳 배열 안에 -1넣기
	int apbt[26];
	for (int i = 0; i < 26; i++)
	{
		apbt[i] = -1;
	}

	for (int i = 0; i < 26; i++)
	{
		int index = str[i] - 'a';
		// str[0]=a, [1]=p, [2]=p, [3]=l, [4]=e

		if (apbt[index] == -1)
		{
			apbt[index] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{

		printf("%d : %d / ", i, apbt[i]);
	} */

	printf("출석 번호 부를 총 숫자");
	int total_number = 0;
	scanf("%d", &total_number);

	printf("출석 번호 입력\n");
	int arr[100] = {0};
	for (int i = 1; i <= total_number; i++)
	{
		scanf("%d", &arr[i]); // 1,2,2 (1번1번,2번2번)
	}

	// 학생번호 순서대로 몇번 불렸는지
	int student_number[23] = {0};

	for (int i = 1; i <= total_number; i++)
	{
		int num = arr[i];
		student_number[num]++;
	}

	for (int i = 1; i <= 23; i++)
	{
		printf("%d ", student_number[i]);
	}

	return 0;
}
