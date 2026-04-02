#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ \n");

    int sum;
    int n = 5;

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                printf("\n{%d %d %d}\n", i, j, k);
                sum = i * j * k;
                printf("sum=%d", sum);
            }
            printf("\n");
        }
        printf("\n");
    }

    // printf("\n%d\n", result);

    return 0;
}