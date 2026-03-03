#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 2738

    printf("배열 크기 입력 : \n");
    int arr[100][100];
    int arr2[100][100];
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    // 첫번째 배열
    /*
    1 1 1
    2 2 2
    0 1 0
    */
    printf("첫번째 배열 입력 : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 두번째 배열
    /*
    3 3 3
    4 4 4
    5 5 100
    */
    printf("두번째 배열 입력 : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("sum 출력\n");
    int sum[a][b];
    // sum[0][0] = arr[0][0] + arr2[0][0];
    // sum[1][1] = arr[1][1] + arr2[1][1];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    // printf("%d\n", sum[0][0]);
    // printf("%d\n", sum[1][1]);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
