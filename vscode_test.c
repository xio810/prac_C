#include <stdio.h>

int main()
{
    /*
    회문인지 아닌지 체크
    */
    char str[100] = "";
    scanf("%s", str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    char temp;

    int pa = 1; // pa=1로 두어야함

    for (int i = 0; i < length / 2; i++) // 0,1
    {
        if (str[i] != str[length - i - 1]) // arr[0] == arr[5-0-1]; arr[1] == arr[5-1-1];
        {
            pa = 0;
        }
    }

    if (pa == 1)
    {
        printf("회문\n");
    }
    else
    {
        printf("회문아님\n");
    }

    return 0;
}
