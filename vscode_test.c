#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
   1152번
   나온 문장에서 단어의 수 몇개인지
     */

    printf("글자 입력 : ");
    char str[1000001] = ""; // 문자 받을 배열
    scanf(" %[^\n]", str);  // 일반적인 %s로 하면, 띄어쓰기하면 그 뒤는 저장안됨

    // 배열 안의 단어 몇개인지 찾기
    // hello world하면 2가 나와야함
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (in_word == 0)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    printf("단어 수 : %d\n", count);

    return 0;
}
