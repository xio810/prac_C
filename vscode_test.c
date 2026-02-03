#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*플래그배열 연습*/

    // 배열에 '5'가 있는지
    printf("숫자 입력\n");

    int arr[5] = {0};
    int length = 5;
    int flag[10] = {0}; // 플래그 배열 선언

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]); // arr배열에 숫자 입력받기
    }

    // 찾기
    for (int i = 0; i < length; i++)
    {

        /* if (arr[i] == 5) // 예시로 arr[3] = 5
        {
            flag[i] = 1;
            break;
        } */
        int num = arr[i];
        flag[num] = 1;
    }

    if (flag[5] == 1)
    {
        printf("있음\n");
    }
    else
    {
        printf("없음\n");
    }

    return 0;
}
