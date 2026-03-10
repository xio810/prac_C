#include <stdio.h>
#include <string.h> //strlen 사용시 필요
#include <ctype.h>  //소->대 char upper = toupper(소문자변수); //대->소 tolower(변수)

int main()
{
    // 백준 2941
    printf("문자입력:\n");
    char str[101] = "";
    scanf("%s", str);

    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    // aaa
    /*  for (int i = 0; i < 3; i++)
     {
         printf("0:%d\n", i);
         if (str[i] == 'a')
         {
             i++;
             printf("1:%d\n", i);
         }
         printf("2:%d\n", i);
         count++;
     } */

    int count = 0;
    for (int i = 0; i < length; i++)
    {
        // c- & c= 입력
        if (str[i] == 'c')
        {
            if (str[i + 1] == '-' || str[i + 1] == '=')
            {
                i++;
            }
        }

        // dz= & d- 입력
        else if (str[i] == 'd')
        {
            if (str[i + 1] == 'z' && str[i + 2] == '=')
            {
                i += 2;
            }
            else if (str[i + 1] == '-')
            {
                i++;
            }
        }

        // lj & nj
        else if (str[i] == 'l' || str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                i++;
            }
        }

        // s= & z=
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                i++;
            }
        }

        count++;
    }

    printf("%d ", count);

    return 0;
}
