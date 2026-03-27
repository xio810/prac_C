#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int x1, y1, x2, y2, x3, y3 = 0;
    int x4, y4 = 0;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if (x1 == x2)
    {
        x4 = x3;
    }
    else if (x2 == x3)
    {
        x4 = x1;
    }
    else
    {
        x4 = x2;
    }

    if (y1 == y3)
    {
        y4 = y2;
    }
    else if (y2 == y3)
    {
        y4 = y1;
    }
    else
    {
        y4 = y3;
    }

    printf("(%d %d)\n", x4, y4);

    return 0;
}