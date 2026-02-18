#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    아스키코드
     */

    printf("글자 개수 입력 : ");
    int num = 0;
    scanf("%d", &num);

    // 글자
    printf("숫자 입력 : \n");
    char str[100] = "";
    scanf("%s", str);

    // 더하기
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += str[i] - '0';
    }

    // 출력
    printf("%d\n", sum);

    return 0;
}
