#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수

    int num = 0;
    scanf("%d", &num);

    int i = 2;
    if (num == 1)
    {
        return 0;
    }

    while (num > 1)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
            num = num / i;
        }
        else
        {
            i++;
        }
    }

    return 0;
}