#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)
// 구조체
struct Letter
{
    char str[101];
    int length;
};

// 함수
int Croatia_Alphabet(struct Letter let)
{
    int count = 0;

    for (int i = 0; i < let.length; i++)
    {
        if (let.str[i] == 'c')
        {
            if (let.str[i + 1] == '-' || let.str[i + 1] == '=')
            {
                i++;
            }
        }
        else if (let.str[i] == 'd')
        {
            if (let.str[i + 1] == '-')
            {
                i++;
            }
            else if (let.str[i + 1] == 'z' && let.str[i + 2] == '=')
            {
                i += 2;
            }
        }
        else if (let.str[i] == 'l' || let.str[i] == 'n')
        {
            if (let.str[i + 1] == 'j')
            {
                i++;
            }
        }
        else if (let.str[i] == 's' || let.str[i] == 'z')
        {
            if (let.str[i + 1] == '=')
            {
                i++;
            }
        }
        count++;
    }
    return count;
}

int main()
{
    // 크로아티아 알파벳
    // c는 -,= & d는 -, z= & j는 lj,nj & =는 s=,z=

    struct Letter let;
    printf("enter : ");
    scanf("%s", let.str);

    let.length = strlen(let.str);
    /* int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '-' || str[i + 1] == '=')
            {
                i++;
            }
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == '-')
            {
                i++;
            }
            else if (str[i + 1] == 'z' && str[i + 2] == '=')
            {
                i += 2;
            }
        }
        else if (str[i] == 'l' || str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                i++;
            }
        }
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                i++;
            }
        }
        count++;
    } */

    int count = Croatia_Alphabet(let);

    printf("%d ", count);

    return 0;
}
