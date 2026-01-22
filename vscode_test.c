#include <stdio.h>
#include <string.h> //strlen 사용시 필요

int main()
{
    /*
    배열길이와 입력받는 횟수를 scanf로 받는다.
    배열안에 길이만큼 숫자를 입력한다.
    ex) arr[5] = {1,2,3,4,5};
    i와 j라는 변수를 통해 arr[0]<->arr[1]같이 배열안의 들어간 수의 위치를 바꾼다.
    그러고 나서 출력한다.
    */
    printf("배열 길이 입력 : ");
    int arr_length = 0; // 배열 길이 입력받을 변수
    scanf("%d", &arr_length);
    int arr[arr_length] = {};
    // printf("%d", arr_length);

    printf("몇 번 입력 : ");
    int how_many = 0; // 몇번 입력받을지 정하는 변수
    scanf("%d", &how_many);
    // printf("%d", how_many);

    // 배열 안에 값 넣기
    for (int i = 0; i < arr_length; i++)
    {
        arr[i] = i + 1; // int arr[5] = {1,2,3,4,5};
    }

    int temp = 0;
    int i = 0, j = 0;

    for (int k = 0; k < how_many; k++) // 0,1,2,3번 반복
    {
        scanf("%d %d", &i, &j); // 1,2번 입력하면, arr[0] <-> arr[1]

        temp = arr[i - 1];       // 1
        arr[i - 1] = arr[j - 1]; // arr[0]안에
        arr[j - 1] = temp;
    }

    for (int i = 0; i < arr_length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
