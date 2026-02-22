#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    2675번
몇번 반복할지 숫자 : 3
abc 입력되면 : aaabbbccc
     */

    printf("글자 입력 횟수 : ");
    int total_num = 0;
    scanf("%d", &total_num); // 여기에 2입력되면 2번만 입력받음

    int string_num = 0; // 글자 몇번 반복하는지 받는 변수
    char str[20] = "";  // 문자 입력받는 문자형 배열

    for (int i = 0; i < total_num; i++) // 2번 반복
    {
        scanf("%d %s", &string_num, str);
        // printf("%c %c\n", str[0], str[0]); // 2번 넣으면 str[0]str[0]이렇게 두번 반복됨

        // 문자열 반복
        for (int j = 0; str[j] != '\0'; j++)
        {
            // 몇번 반복 출력되는지
            for (int k = 0; k < string_num; k++)
            {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
