#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ \n");
    /*
        f(n) = a1 * n0 + a0
        f(n) 내 차 속도
        a1 가속도
        c 규정 속도
        n0 약속지점(검사 시작 지점)

    */

    int a1, a0, c, n0;
    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);

    int fx = a1 * n0 + a0;
    // 조건 1
    // 내 차의 속도가 규정속도보다 오버되면 안된다.

    if ((fx <= c * n0) && (a1 <= c))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    // 조건 2
    // 가속도 검사

    return 0;
}