#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 2566번
    printf("배열 입력\n");
    int arr[9][9];
    int length = 3;

    // 배열안에 값 넣기
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 배열 안에서 최댓값 찾기
    int max = arr[0][0];
    int row = 0;    // 행
    int column = 0; // 열
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i;
                column = j;
            }
        }
    }

    printf("max : %d\n", max);
    printf("%d %d\n", row + 1, column + 1);

    return 0;
}
