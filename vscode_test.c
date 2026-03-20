#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    printf("=>");

    int climb = 0;
    int down = 0;
    int height = 0;
    scanf("%d %d %d", &climb, &down, &height);

    long long days = 0;
    days = (height - days - 1) / (climb - days) + 1;

    printf("%lld\n", days);

    return 0;
}
