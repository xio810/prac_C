#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    printf("ʚ₍ ᐢ. ̫ .ᐢ ₎ɞ ➜ \n");
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100];
    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 3중 for문
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m && sum > max_sum)
                {
                    max_sum = sum;
                }
            }
        }
    }

    printf("%d\n", max_sum);

    return 0;
}