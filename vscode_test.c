#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    10809
     */

    printf("글자 입력 : ");
    char str[100] = "";
    scanf("%s", str);

    // 플래그 배열에 전부 -1값 넣기 (입력된 글자에 사용된 알파벳 없다고 표시용)
    int alphabet[26];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = -1;
    }

    // 문자열 순회 (입력된 문자 : apple)
    for (int i = 0; str[i] != '\0'; i++)
    {
        int index = str[i] - 'a'; // 97-97=0 p는 112-97=15

        if (alphabet[index] == -1) // alp[0] == -1 이라면 (아직 안나온 글자라면)
        {
            alphabet[index] = i; // alp[0]에 0이라고 기록, alp[15]=1
        }
    }

    // 출력
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet[i]);
    }

    return 0;
}
