#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ ");

    /*
    Equilateral :  세 변의 길이가 모두 같은 경우
    Isosceles : 두 변의 길이만 같은 경우
    Scalene : 세 변의 길이가 모두 다른 경우
    */
    while (1)
    {
        int one, two, three = 0;

        scanf("%d %d %d", &one, &two, &three);

        // break
        if (one == 0 && two == 0 && three == 0)
        {
            break;
        }

        if (one + two <= three || one + three <= two || two + three <= one)
        {
            printf("Invalid\n");
        }

        // Equilateral :  세 변의 길이가 모두 같은 경우
        else if (one == two && two == three && one == three)
        {
            printf("Equilateral\n");
        }
        else if (one == two || two == three || three == one)
        {

            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
    }

    return 0;
}