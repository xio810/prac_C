#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 2444
    // 다이아몬드 찍기

    int length = 5;

    // 위 다이아몬드
    for (int i = 1; i <= length; i++)
    {
        for (int k = length - i; k > 0; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 아래 다이아몬드
    for (int i = 1; i <= length - 1; i++)
    {
        // 공백 1~4로 늘어남
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        // 별 7개부터 줄어들기
        for (int j = 2 * (length - i) - 1; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
