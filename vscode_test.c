#include <stdio.h>
#include <string.h> //strlen 사용시 필요

int main()
{
    // 회문찾기
    // noon -> 회문
    // prom -> 회문아님
    // noan -> 회문아님

    char arr[100] = ""; // 배열초기화

    printf("문자 입력 : ");
    scanf("%s", arr); // 문자열 입력받기

    // int length = strlen(arr);
    int length = 0;

    for (int i = 0; arr[i] != '\0'; i++) // 입력받은 문자열 길이찾기
    {
        length++;
    }

    int palindrome = 1; // 입력받은 문자가 회문이라고 가정을 한다

    for (int i = 0; i < length / 2; i++) // 인덱스0부터 돌면서 양끝 단어가 같은지 판별
    {
        // 대문자-소문자 변환과정
        char str1 = arr[i];
        char str2 = arr[length - i - 1];

        if ('A' <= str1 && str1 <= 'Z') // A <= str1 <= Z //N이 나오면 n으로 바꾸는 if문
        {
            str1 = str1 + 32;
        }

        if ('A' <= str2 && str2 <= 'Z')
        {
            str2 = str2 + 32;
        }

        // 양 끝 단어가 같지 않으면 회문변수 0으로
        if (str1 != str2)
        {
            palindrome = 0;
        }
    }

    if (palindrome == 1)
    {
        printf("회문입니다\n");
    }
    else
    {
        printf("아닙니다\n");
    }

    return 0;
}
