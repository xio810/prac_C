#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    공바꾸기 문제
    첫째 줄 : 5 4 -> 바구니개수, 교환횟수
     */

    printf("바구니개수 & 교환횟수 입력");
    int basket = 0, change_count = 0; // 바구니개수, 교환횟수
    scanf("%d %d", &basket, &change_count);

    // 배열 선언
    int arr[100] = {0};

    // 바구니에 숫자 넣기
    for (int i = 0; i < basket; i++)
    {
        arr[i] = i + 1; // arr[0]=1, arr[1]=2 ...
    }

    // 교환 a,b입력받기
    printf("교환 번호 입력 : \n");

    int a = 0, b = 0;
    int temp = 0;
    for (int i = 0; i < change_count; i++)
    {
        scanf("%d %d", &a, &b); // 1번과 2번 공 바꾸기 -> arr[0]과arr[1]

        temp = arr[a - 1];
        arr[a - 1] = arr[b - 1];
        arr[b - 1] = temp;
    }

    // 출력
    for (int i = 0; i < basket; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
