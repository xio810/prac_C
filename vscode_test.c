#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    printf("===>");

    int first = 0;
    int second = 0;

    while (1)
    {
        scanf("%d %d", &first, &second);

        if (first == 0 && second == 0)
        {
            break;
        }

        if (second % first == 0)
        {
            printf("factor\n");
        }
        else if (first % second == 0)
        {
            printf("multiple\n");
        }
        else
        {
            printf("neither\n");
        }
    }

    return 0;
}
