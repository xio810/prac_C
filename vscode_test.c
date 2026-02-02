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

    // 플래그변수들
    int hasDigit = 0;      // 숫자유무 확인
    int hasCapital = 0;    // 대문자 확인
    int hasLower = 0;      // 소문자 확인
    int securityLevel = 0; // 보안등급

    for (int i = 0; str[i] != '\0'; i++) // str문자가 null이 아닐때까지 반복
    {
        if ('0' <= str[i] && str[i] <= '9') // 숫자나오는지 체크
        {
            hasDigit = 1; // 숫자가 나오면 플래그변수 1로
        }
        if ('A' <= str[i] && str[i] <= 'Z') // 대문자나오는지 체크
        {
            hasCapital = 1;
        }
        if ('a' <= str[i] && str[i] <= 'z')
        {
            hasLower = 1;
        }

        // 플래그변수들이 다 1이면 break
        if (hasCapital == 1 && hasDigit == 1 && hasLower == 1)
        {
            break;
        }
    }

    // 보안 등급
    if (hasDigit == 1)
    {
        securityLevel++;
    }
    if (hasCapital == 1)
    {
        securityLevel++;
    }
    if (hasLower == 1)
    {
        securityLevel++;
    }

    // 숫자가 있을 때
    if (hasDigit == 1)
    {
        printf("숫자포함O\n");
    }
    else
    {
        printf("숫자를 포함해주세요\n");
    }

    // 대문자 있을 때
    if (hasCapital == 1)
    {
        printf("대문자포함O\n");
    }
    else
    {
        printf("대문자필요\n");
    }

    // 소문자 있을 때
    if (hasLower == 1)
    {
        printf("소문자포함O\n");
    }
    else
    {
        printf("소문자필요\n");
    }

    // 보안등급 레벨 출력
    if (securityLevel == 3)
    {
        printf("보안 등급: 매우 안전 🔒\n");
    }
    else if (securityLevel == 2)
    {
        printf("보안 등급: 안전 ✓\n");
    }
    else if (securityLevel == 1)
    {
        printf("보안 등급: 보통 ⚠️\n");
    }
    else
    {
        printf("보안 등급: 취약 ✗\n");
    }

    return 0;
}
