#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*

     */

    printf("정수 입력 : \n");

    int length = 10;

    // 정수입력 & 42로 나누기
    int division[42] = {0};
    int num = 0;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &num);
        division[num % 42] = 1;
    }

    // 개수 세기
    int count = 0;
    for (int i = 0; i < 42; i++)
    {
        if (division[i] == 1)
        {
            count++;
        }
    }

    // 출력
    printf("나머지 : %d ", count);

    return 0;
}
