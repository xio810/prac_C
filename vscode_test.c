#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");

    while (1)
    {
        int divisor = 0;    // 약수
        int sum = 0;        // 약수들 더한값
        int arr[100] = {0}; // 약수저장
        int j = 0;

        scanf("%d", &divisor);

        if (divisor == -1)
        {
            break;
        }

        for (int i = 1; i < divisor; i++)
        {
            if (divisor % i == 0)
            {
                arr[j] = i;
                sum += i;
                j++;
            }
        }
        // arr[0]=1, [1]=2, [2]=3
        if (divisor == sum)
        {
            printf("%d = %d", divisor, arr[0]);

            for (int i = 1; i < j; i++)
            {
                printf(" + %d", arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect\n", divisor);
        }
    }

    return 0;
}