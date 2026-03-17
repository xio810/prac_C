#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{

    printf("숫자입력 : ");
    //(2n제곱+1)제곱
    // 2 -> 3 -> 5 -> 9 -> 17
    // 4 -> 9 -> 25 ...
    // 1번 입력 하면 9
    int num = 0;
    scanf("%d", &num);

    int mul = 1; // 곱하는 값
    int result = 0;

    for (int i = 0; i < num; i++)
    {
        mul = mul * 2;
    }
    int ex = mul + 1;

    result = ex * ex;

    printf("%d\n", result);

    return 0;
}
