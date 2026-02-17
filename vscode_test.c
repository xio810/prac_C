#include <stdio.h>
// #include <string.h> //strlen 사용시 필요
// #include <ctype.h>  //대문자<->소문자 변경 함수 사용시 필요

int main()
{
    /*
백준1546번
     */
    printf("과목 개수 입력 : ");
    int subject = 0;
    scanf("%d", &subject);

    printf("과목 점수 입력 : \n");
    int score[1000] = {0};
    for (int i = 0; i < subject; i++)
    {
        scanf("%d", &score[i]);
    }

    // 입력된 성적 중 최대값 찾기
    int max = 0;

    for (int i = 0; i < subject; i++)
    {
        if (max < score[i])
        {
            max = score[i];
        }
    }

    // 점수 값 고치기
    double arr[1000] = {0}; // 점수 값 고친거 담는 배열

    for (int i = 0; i < subject; i++)
    {
        int num = score[i];
        arr[i] = (double)num / max * 100;
    }

    // 새로운 평균 구하기
    double sum = 0; // 합계

    // 점수 총점 찾기
    for (int i = 0; i < subject; i++)
    {
        sum += arr[i];
    }
    // 평균 구하기
    double avg = sum / subject;

    // 출력

    printf("%.1f\n", avg);

    return 0;
}
