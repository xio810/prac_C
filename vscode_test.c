#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 10988
    // 회문(팰린드롬) 확인
    // 회문이면 1 출력, 아니면 0 출력

    printf("단어 입력 : \n");
    char str[100] = "";
    scanf("%s", str);

    // 길이
    int length = strlen(str);

    // 대문자 -> 소문자
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    // 회문판독
    int count = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            count = 0;
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
