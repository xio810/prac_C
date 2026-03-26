#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int x, y, w, h = 0;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int right, left, top, bottom = 0;

    left = x - 0;
    right = w - x;
    top = h - y;
    bottom = y - 0;

    int arr[4] = {left, right, top, bottom};

    int min = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}