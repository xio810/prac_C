#include <stdio.h>
#include <string.h> //strlen 사용시 필요

int main()
{
    /*
    문자를 소문자로 입력받는다. 예시 'apple'
    입력받은 문자 안에서 같은 단어가 몇개 있는지 센다.
    a : 1, p : 2, l : 1, e : 1
    아스키코드 'a' = 97
    */

    // 문자열 입력 및 저장
    printf("문자열 입력 : ");
    char str[100] = "";
    scanf("%s", str);

    // 대문자 소문자
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z') //'A' <= str[i] <= 'Z'
        {
            str[i] = str[i] + 32;
        }
    }

    int count[26] = {0}; // 글자가 몇개 있는지 저장하는 배열. 배열 안은 전부 0이 저장되어 있다.

    // 글자가 몇개 있는지 세는 반복문
    for (int i = 0; str[i] != '\0'; i++) // 문자를 입력받은 배열. 0이 나오기 전까지 계속 반복된다.
    {
        char ch = str[i]; // str[0] = 'a'; str[1] = 'p';

        count[ch - 'a']++; // p는 112. 112-97=15; -> count[15]++;
    }

    // 글자 : 숫자 -> 출력하는 반복문
    for (int i = 0; i < 26; i++)
    {
        // if문. 조건을 걸지 않으면 모든 알파벳이 다 출력된다.
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]); //'a'라고 해도 컴퓨터는 97로 읽는다.
        }
    }

    return 0;
}
