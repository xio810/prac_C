#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");
    // 입력 받을 수
    int num = 0;
    scanf("%d", &num);

    // 소수인지 판별할 수들 넣는 배열
    int arr[100] = {0};

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for (int i = 0; i < num; i++)
    {
        int count = 0;

        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            total++;
        }
    }

    printf("%d ", total);

    return 0;
}