#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 10798번
    printf("배열 입력\n");
    char str[5][16] = {0};
    int length = 5;

    // 배열안에 값 넣기
    for (int i = 0; i < length; i++)
    {
        scanf("%s", str[i]);
    }

    // 세로줄 출력
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[j][i] != '\0' && str[j][i] != 0)
            {
                printf("%c", str[j][i]);
            }
        }
    }
    // printf("%c [%c]", str[0][0], str[2][3]);
    printf("\n");
    return 0;
}
