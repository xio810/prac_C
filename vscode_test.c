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

        // max구하기
        int max = one;

        if (two > max)
        {
            max = two;
        }
        if (three > max)
        {
            max = three;
        }

        // max보다 두변 더한 값이 안크면 ㅇㅇ출력
        int sum = one + two + three;   // 세 변 다 더한 값
        int remaining_sum = sum - max; // 제일 긴 변 아닌 두 변 더한 값

        if (remaining_sum <= max)
        {
            printf("Invalid\n");
        }
        else
        {
            // Equilateral :  세 변의 길이가 모두 같은 경우
            if (one == two && two == three && one == three)
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
    }

    return 0;
}