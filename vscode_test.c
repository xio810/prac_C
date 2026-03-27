#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int dot[3][2] = {0};
    int x4, y4;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &dot[i][0], &dot[i][1]);
    }

    // 5 5 , 5 7, 7 5
    // x
    if (dot[0][0] == dot[1][0])
    {
        x4 = dot[2][0];
    }
    else if (dot[0][0] == dot[2][0])
    {
        x4 = dot[1][0];
    }
    else
    {
        x4 = dot[0][0];
    }

    // y
    if (dot[0][1] == dot[2][1])
    {
        y4 = dot[1][1];
    }
    else if (dot[0][1] == dot[1][1])
    {
        y4 = dot[2][1];
    }
    else
    {
        y4 = dot[0][1];
    }

    printf("======\n");
    printf("%d %d\n", x4, y4);
    return 0;
}