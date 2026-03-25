#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int bottom, high = 0;
    scanf("%d %d", &bottom, &high);

    int sum = 0;
    int min = -1; // 최솟값

    for (int i = bottom; i <= high; i++)
    {
        int count = 0;

        for (int k = 1; k <= i; k++)
        {
            if (i % k == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            sum += i;
            if (min == -1)
            {
                min = i;
            }
        }
    }

    if (sum == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }

    return 0;
}