#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    // 백준 1316
    // 그룹단어찾기
    // aabb (O) abbx (X)
    // 문자를 입력하자마자 그룹단어인지 체크하도록

    printf("몇번 입력받을지 입력:\n");
    int how_many_num = 0;
    scanf("%d", &how_many_num);

    int count = 0; // 그룹 단어 수 세기 용도

    for (int i = 0; i < how_many_num; i++)
    {
        char str[101] = "";
        scanf("%s", str);
        int length = strlen(str);

        int alphabet[26] = {0};
        int flag = 1; // 기본적으로 그룹단어라고 가정

        for (int j = 0; j < length; j++) // 입력받은 문자열 반복하는 반복문
        {
            // aabb 입력됐다고 가정
            if (j > 0 && str[j] != str[j - 1])
            {
                if (alphabet[str[j] - 'a'] == 1)
                {
                    flag = 0; // 그룹 단어가 아니라고 명시
                    break;
                }
            }
            alphabet[str[j] - 'a'] = 1;
        }
        if (flag == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
