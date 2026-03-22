#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");

    int divisor = 0; // 6의 약수
    int num = 0;     // 3번째로 작은 수 출력
    scanf("%d %d", &divisor, &num);

    int arr[10000] = {0}; // 약수담기

    int j = 0;

    for (int i = 1; i <= divisor; i++)
    {
        if (divisor % i == 0)
        {
            arr[j] = i;
            j++;
        }
    }

    // 출력
    printf("%d ", arr[num - 1]);

    return 0;
}