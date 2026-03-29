#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ ");

    // 백준 10101

    int one, two, three = 0;

    scanf("%d %d %d", &one, &two, &three);

    if (one == 60 && two == 60 && three == 60)
    {
        printf("Equilateral\n");
    }
    else if (one + two + three == 180)
    {
        // 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
        if (one == two || two == three || one == three)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
        // 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
    }
    else
    {
        printf("Error");
    }

    return 0;
}