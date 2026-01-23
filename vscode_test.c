#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
    첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
    배열에 10개의 수를 입력받는다
    입력받은 수를 42로 나눠서 나머지를 구한다

    */
    printf("숫자 입력 : ");
    int length = 5;
    int arr[5] = {0};

    // 1. arr에 숫자 입력
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]); // 42, 43, 44, 45, 420
    }

    // 2. 42로 나누기
    int remainder[5] = {0};

    for (int i = 0; i < length; i++)
    {
        remainder[i] = arr[i] % 42; // 0,1,2,3,0 -> 서로 다른 나머지 : 4개
    }

    // 3. 서로 다른 나머지 개수 찾기
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        int duplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (remainder[j] == remainder[i])
            {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0)
        {
            count++;
        }
    }

    // 4. 서로 다른 나머지 개수 출력
    printf("서로 다른 개수 : %d\n", count);

    return 0;
}
