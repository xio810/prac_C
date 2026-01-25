#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    printf("숫자입력:");
    int length = 0;
    scanf("%d", &length);

    for (int i = 1; i <= length; i++) // 겉면. 세로 길이
    {
        for (int k = length; k > i; k--) // 빈칸.
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) - 1; j++) // 첫째줄 별 1. 둘째줄 별 3. 셋째줄 별 5.
        {

            // 여기서 그냥 별을 찍는 게 아니라...
            if (j == 0 || j == (2 * i) - 2) // i=4이면, 8-2=6
            {
                printf("*"); // 줄의 시작이거나 끝일 때만 별!
            }
            else
            {
                printf(" "); // 그 외에는 빈칸!
            }
        }

        printf("\n");
    }

    for (int i = 1; i < length; i++) // 아래 세모. 총 길이
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * length) - (2 * i) - 1; j++) // 첫째줄 별 7. 둘째줄 별 5. 셋째줄 별 3
        {
            // 여기서 그냥 별을 찍는 게 아니라...
            if (j == 0 || j == (2 * length) - (2 * i) - 2)
            {
                printf("*"); // 줄의 시작이거나 끝일 때만 별!
            }
            else
            {
                printf(" "); // 그 외에는 빈칸!
            }
        }

        printf("\n");
    }

    return 0;
}
