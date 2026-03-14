#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    // 백준 2745
    //  ZZZZZ 36 입력

    printf("입력:\n");

    char str[37] = ""; // ZZZ
    int jin = 0;       // 진법
    scanf("%s %d", str, &jin);

    int length = strlen(str);

    int result = 0;
    int mul = 1;

    for (int i = length - 1; i >= 0; i--)
    {
        int num = 0;

        if ('A' <= str[i] && str[i] <= 'Z')
        {
            num = str[i] - 'A' + 10;
        }
        else
        {
            num = str[i] - '0';
        }

        result += mul * num;

        mul = mul * jin;
    }

    printf("%d ", result);

    return 0;
}
