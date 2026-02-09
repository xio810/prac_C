#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*플래그배열 연습*/

    // 배열에 '5'가 있는지
    // or 1이 아닌 수들

    printf("숫자입력:\n");
    int arr[5] = {0};
    int length = 5;
    // 플래그배열
    int flag[15] = {0};

    // 정수 배열에 숫자 입력
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]); // arr[0]=0, arr[1]=1 ... arr[5]= 5;
    }

    // 1,1,3,3,5 입력됐을 시, 1,3이 중복이라고 체크
    for (int i = 0; i < length; i++)
    {
        int num = arr[i];
        flag[num]++;
    }

    // 출력
    /* if (flag[5] == 1)
    {
        printf("=O=\n");
    }
    else
    {
        printf("=X=\n");
    } */

    printf("중복된 숫자 : ");
    for (int i = 0; i < 15; i++)
    {
        if (flag[i] > 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
