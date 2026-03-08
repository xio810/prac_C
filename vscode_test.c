#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 3003

    // 킹,퀸,룩,비숍,나이트,폰
    int chess[7] = {1, 1, 2, 2, 2, 8};

    // 찾은 흰색 체크 개수 입력
    printf("입력 : \n");
    int white[7] = {0};
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &white[i]);
    }

    for (int i = 0; i < 6; i++)
    {

        printf("%d ", chess[i] - white[i]);
    }

    return 0;
}
