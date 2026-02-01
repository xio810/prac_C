#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    // 플래그 변수 연습
    /*
    사용자가 문자열을 입력합니다. (예: apple7, password, 12345)

    이 문자열에 '숫자'가 하나라도 포함되어 있는지 확인하세요.

    숫자가 있으면 "보안 등급 높음", 없으면 **"숫자를 포함해주세요"**라고 출력하세요.
    */
    printf("문자를 입력 : ");
    char str[10] = "";
    scanf("%s", str);
    int hasDigit = 0; // 숫자유무 확인하는 플래그변수

    for (int i = 0; str[i] != '\0'; i++) // str문자가 null이 아닐때까지 반복
    {
        if ('0' <= str[i] && str[i] <= '9')
        {
            hasDigit = 1; // 숫자가 나오면 플래그변수 1로
            break;
        }
    }

    if (hasDigit == 1)
    {
        printf("보안 등급 높음\n");
    }
    else
    {
        printf("숫자를 포함해주세요\n");
    }

    return 0;
}
