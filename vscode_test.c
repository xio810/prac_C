#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ ");

    int one, two, three = 0;

    scanf("%d %d %d", &one, &two, &three);

    int max = one;
    if (max < two)
    {
        max = two;
    }
    if (max < three)
    {
        max = three;
    }

    int sum = one + two + three;
    int two_sum = sum - max;

    // printf(" %d %d ", sum, two_sum);

    if (max < two_sum)
    {
        printf("%d\n", sum);
    }

    // 길이가 긴 변이, 나머지 두 변 합보다 길 경우
    if (max >= two_sum)
    {
        max = two_sum - 1; // 10 5 4 가정, max를 8로 바꾼다.
        printf("%d\n", max + two_sum);
    }

    return 0;
}