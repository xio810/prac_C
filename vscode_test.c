#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    printf("=>");

    int number = 0;
    scanf("%d", &number);

    int line = 1;
    while (number > line)
    {
        number = number - line;
        line++;
    }

    if (line % 2 == 0) // 짝수
    {
        printf("%d/%d\n", number, line - number + 1);
    }
    else
    {
        printf("%d/%d\n", line - number + 1, number);
    }

    return 0;
}
