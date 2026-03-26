#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int a, b = 0;
    scanf("%d %d", &a, &b);

    int mul = a * b;

    printf("%d ", mul);
    return 0;
}