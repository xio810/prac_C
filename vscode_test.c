#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    printf("===>");
    // 6 3 예시
    int divisor = 0; // 6의 약수
    int num = 0;     // 3번째로 작은 수 출력
    scanf("%d %d", &divisor, &num);

    int count = 0;

    for (int i = 1; i <= divisor; i++)
    {
        if (divisor % i == 0)
        {
            count++;
            if (count == num)
            {
                printf("%d ", i);
                break;
            }
        }
    }

    if (count < num)
    {
        printf("0\n");
    }

    return 0;
}
