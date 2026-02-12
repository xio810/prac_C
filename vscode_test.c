#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /* 첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.*/

    printf("배열 길이 입력:");

    int length = 0;
    scanf("%d", &length); // 11로 지정

    // 배열 길이를 scanf로 지정불가하므로, 큰 수로 지정
    int arr[100] = {0};

    // 배열 안에 숫자 넣기
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 찾을 정수 입력받기
    printf("찾을 정수 입력 :");

    int find = 0;
    scanf("%d", &find);

    // 찾을 정수 몇개인지
    int flag = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == find)
        {
            flag++;
        }
    }

    // 찾는 정수의 개수 출력
    printf("정수 개수 : %d\n", flag);
    return 0;
}
