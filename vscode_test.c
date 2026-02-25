#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    2908번
    // 734 893를 입력하면 -> 437 398로 바꾼다 (뒤로읽기) -> 바꾼 숫자 중 큰 수 출력
     */

    printf("숫자 입력 : ");
    int length = 3;             // 문자열 길이
    char str1[4], str2[4] = ""; // 입력된 숫자(문자열)2개 담는 배열 2개
    scanf("%s %s", str1, str2); // 두 숫자 문자열로 입력

    // 거꾸로 만들기
    int temp = 0;
    for (int i = 0; i < length / 2; i++)
    {
        temp = str1[length - i - 1];
        str1[length - i - 1] = str1[i];
        str1[i] = temp;

        temp = str2[length - i - 1];
        str2[length - i - 1] = str2[i];
        str2[i] = temp;
    }

    int num1, num2 = 0; // 문자로 변환된 숫자 저장할 변수
    // sscanf(str1, "%d", &num1); -> 문자열을 숫자로 변환하는 함수

    // 숫자로 변환
    num1 = ((str1[0] - '0') * 100) + ((str1[1] - '0') * 10) + (str1[2] - '0');
    num2 = ((str2[0] - '0') * 100) + ((str2[1] - '0') * 10) + (str2[2] - '0');

    // 크기 비교
    if (num1 > num2)
    {
        printf("%d\n", num1);
    }
    else
    {
        printf("%d\n", num2);
    }

    return 0;
}
