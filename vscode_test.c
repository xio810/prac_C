#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 1157
    // 많이나온 알파벳 출력
    // 많이 나온 알파벳이 겹치면 ? 출력

    printf("단어 입력 : \n");
    char str[1000001] = "";
    scanf("%s", str);

    // 소->대 변경, 알파벳배열에 글자 개수 넣기
    int alphabet[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        alphabet[toupper(str[i]) - 'A']++;
    }

    // 알파벳 배열 안에서 최대값 찾기
    int max = -1;
    char letter;
    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            letter = i + 'A'; // letter변수에 0+'A'해서 다시 문자로 만들기
        }
        else if (alphabet[i] == max && max != 0)
        {
            letter = '?';
        }
    }

    printf("%c\n", letter);

    return 0;
}
