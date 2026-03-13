#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
struct Subject
{
    char subject_name[51];
    double subject_grade;
    char score[3];
};

double calculate_gpa(struct Subject subjects[])
{
    double mul = 0;               // 과목학점 * 받은등급
    double subject_grade_sum = 0; // 과목학점 전체 더하기

    for (int i = 0; i < 20; i++)
    {
        double score_num = 0; // 등급에 따른 점수

        scanf("%s %lf %s", subjects[i].subject_name, &subjects[i].subject_grade, subjects[i].score);

        // 등급 별 점수
        // 등급이 P인 과목은 계산에서 제외해야 한다.
        if (subjects[i].score[0] == 'P')
        {
            continue;
        }
        // A+ & A0 은 4.5 & 4.0
        if (subjects[i].score[0] == 'A')
        {
            if (subjects[i].score[1] == '+')
            {
                score_num = 4.5;
            }
            else if (subjects[i].score[1] == '0')
            {
                score_num = 4.0;
            }
        }
        // B+ & B0 은 3.5 & 3.0
        if (subjects[i].score[0] == 'B')
        {
            if (subjects[i].score[1] == '+')
            {
                score_num = 3.5;
            }
            else if (subjects[i].score[1] == '0')
            {
                score_num = 3.0;
            }
        }
        // C+ & C0 은 2.5 & 2.0
        if (subjects[i].score[0] == 'C')
        {
            if (subjects[i].score[1] == '+')
            {
                score_num = 2.5;
            }
            else if (subjects[i].score[1] == '0')
            {
                score_num = 2.0;
            }
        }
        // D+ & D0 은 1.5 & 1.0
        if (subjects[i].score[0] == 'D')
        {
            if (subjects[i].score[1] == '+')
            {
                score_num = 1.5;
            }
            else if (subjects[i].score[1] == '0')
            {
                score_num = 1.0;
            }
        }
        // F는 0.0
        if (subjects[i].score[0] == 'F')
        {
            score_num = 0.0;
        }

        mul += (subjects[i].subject_grade * score_num);
        subject_grade_sum += subjects[i].subject_grade;
    }
    return mul / subject_grade_sum;
}
int main()
{
    // 구조체
    struct Subject subject[20];

    printf("입력 : \n");

    double result = calculate_gpa(subject);

    printf("%.6f\n", result);

    /*
    전공평점 계산 방법
    ObjectOrientedProgramming1 3.0 A+(4.5)
    IntroductiontoComputerEngineering 3.0 A+ 면
    ( (3.0 * 4.5) + (3.0 * 4.5) ) / (3.0 + 3.0)
    */
    return 0;
}
