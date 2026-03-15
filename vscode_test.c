#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
int main()
{
    // 백준 2745
    //  ZZ 36 입력 -> 1295

    printf("입력:\n");

    int number = 0; // 1295
    int jin = 0;    // 진법 36
    scanf("%d %d", &number, &jin);

    char alph[100];

    int mox = 0; // 몫
    int ext = 0; // 나머지

    int i = 0; // 알파벳배열 ++ 용도

    while (number > 0)
    {
        mox = number / jin;
        ext = number % jin;

        if (ext < 10)
        {
            alph[i] = ext + '0';
        }
        else
        {
            alph[i] = ext + 'A' - 10;
        }

        i++;

        number = mox;
    }

    // printf("%d %d \n", mox, ext);

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", alph[j]);
    }
    printf("\n");

    return 0;
}
