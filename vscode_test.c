#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{

    long long bee; // 찾으려는 방 번호
    scanf("%lld", &bee);

    int layer = 1;
    int i = 0;
    int num = 1;

    while (bee > num)
    {
        i++;
        num = num + (6 * i);
        layer++;
    }

    printf("%d\n", layer);

    return 0;
}
