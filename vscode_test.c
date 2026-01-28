#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
     문자입력받은 뒤, 글자 개수 출력
    apple
    a:1
    p:2
    l:1
    e:1
 */
    // 1. 문자 입력
    printf("문자입력:");
    char str[50] = "";
    scanf("%s", str);

    // 입력받은 문자 길이 체크
    int length = 0;
    length = strlen(str);

    // 대문자-소문자 변경
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    // 글자 개수 담을 정수형 배열 생성
    int count[26] = {0};

    // 글자 개수 배열에 넣기
    for (int i = 0; str[i] != '\0'; i++) // str배열에 \0가 나올때까지 반복
    {
        char ch = str[i];  // str[0] = 'a';임. ch='a'가 들어감
        count[ch - 'a']++; // 예시로, p가 입력됐을 때, 112. 112-97 = 15임. count[15]++;임
        // count[0]=1; count[15]=2; count[11] = 1;
    }

    // 글자 순서대로 출력되게

    // 글자가 출력되었는지 저장하는 변수
    int printed[26] = {0}; // 0:출력안됨 , 1:출력됨

    for (int i = 0; str[i] != '\0'; i++) // str배열에 \0 나오기 전까지 반복. apple이면 0~4
    {
        char ch = str[i];     // ch = str[0] => ch = 'a'; //ch = str[1] => ch = 'p'
        int index = ch - 'a'; // index = 0, index = 15;

        if (printed[index] == 0) // printed[0] = 0
        {
            printf("%c : %d\n", ch, count[index]);
            printed[index] = 1; // printed[0] = 1으로 바뀜
        }
    }

    return 0;
}
