#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen사용시 필요

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

	// 백준 5622

	printf("알파벳 입력 : ");
	char str[16] = ""; // WA입력
	scanf("%s", str);
	int length = strlen(str);

	// 소문자를 대문자로 변경
	for (int i = 0; i < length; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	// 조건
	int total = 0;
	for (int i = 0; i < length; i++)
	{
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
		{
			total = total + 3;
		}
		if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
		{
			total = total + 4;
		}
		if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
		{
			total = total + 5;
		}
		if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
		{
			total = total + 6;
		}
		if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
		{
			total = total + 7;
		}
		if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
		{
			total = total + 8;
		}
		if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
		{
			total = total + 9;
		}
		if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
		{
			total = total + 10;
		}
	}

	printf("걸린시간 : %d\n", total);

	return 0;
}
