#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요  char upper = toupper(소문자변수);

int main()
{
    // 백준 2563번
    // 가로, 세로의 크기가 각각 10인 정사각형

    printf("색종이의 수 : ");
    int color_paper_num = 0;
    scanf("%d", &color_paper_num);

    printf("배열 입력\n");
    int arr[100][100] = {0};
    // 색종이 붙일 위치 받을 변수
    int x, y;

    for (int i = 0; i < color_paper_num; i++)
    {
        scanf("%d %d", &x, &y); // 좌표(3,7)
        for (int j = x; j < x + 10; j++)
        {
            for (int k = y; k < y + 10; k++)
            {
                arr[j][k] = 1;
            }
        }
    }

    // 1인 배열 개수 세기
    int count = 0;

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
