#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
Sprout입력시 문자열길이 출력
     */

    printf("테스트 케이스 개수 입력 : ");
    int test_case = 0;
    scanf("%d", &test_case);

    printf("글자입력:\n");
    char str[1000] = "";

    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", str);

        int length = 0; // 초기화 필요
                        /*   while (str[length] != '\0')
                          {
                
                              length++;
                          } */
        for (int j = 0; str[j] != '\0'; j++)
        {
            length++;
        }
        printf("%c%c\n", str[0], str[length - 1]);
    }
    return 0;
}
