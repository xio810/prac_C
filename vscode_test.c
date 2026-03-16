#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{

    printf("몇번 입력 받을 지 : ");
    int test_case = 0;
    scanf("%d", &test_case);

    printf("금액 입력 : \n");
    int num = 0;
    int coins[4] = {25, 10, 5, 1};
    int count[4] = {0};

    // 몫과 나머지
    int mox = 0; // 몫
    int nam = 0; // 나머지

    while (test_case--)
    {
        scanf("%d", &num);

        for (int i = 0; i < 4; i++)
        {
            mox = num / coins[i];
            nam = num % coins[i];

            if (num < coins[i])
            {
                count[i] = 0;
            }
            else
            {

                count[i] = mox;
            }

            printf("%d ", count[i]);

            num = nam;
        }
        printf("\n");
    }

    return 0;
}
