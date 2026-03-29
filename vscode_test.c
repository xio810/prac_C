#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ ");
    // 입력 받을 수
    int turn = 0; // 점의개수
    scanf("%d", &turn);

    int x, y = 0;

    /*
    3
    20 24
    40 21
    10 12
    */
    int garo = 0;
    int sero = 0;
    int result = 0;

    int min_x = 10001, max_x = -10001;
    int min_y = 10001, max_y = -10001;

    for (int i = 0; i < turn; i++)
    {
        scanf("%d %d", &x, &y);

        if (x < min_x)
            min_x = x;
        if (x > max_x)
            max_x = x;
        if (y < min_y)
            min_y = y;
        if (y > max_y)
            max_y = y;
    }

    garo = max_x - min_x;
    sero = max_y - min_y;

    result = garo * sero;

    printf("%d ", result);

    return 0;
}