#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("===>");

    while (1)
    {
        int divisor = 0; // 약수
        int arr[100] = {0};
        int j = 0;
        int sum = 0;

        scanf("%d", &divisor);

        if (divisor == -1)
        {
            break;
        }

        for (int i = 1; i < divisor; i++)
        {
            if (divisor % i == 0) // 나눠서 약수인애들만
            {
                arr[j] = i;
                sum += i; // 약수 다 더해서 divisor값이 나오는지
                j++;
            }
        }

        if (divisor == sum)
        {
            printf("%d = %d", divisor, arr[0]);

            for (int i = 1; i < j; i++)
            {
                printf(" + %d", arr[i]);
            }
            printf("\n");
        }
        else if (divisor != sum)
        {
            printf("%d is NOT perfect.\n", divisor);
        }
    }

    return 0;
}