#include <stdio.h>

int main()
{
    /*
입력받은 문자를 거꾸로 출력
hello
olleh

program
margorp
 */
    char str[] = "";
    scanf("%s", str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    char temp;

    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    for (int i = 0; i < length; i++)
    {

        printf("%c ", str[i]);
    }

    /*
    1,2,3,4,5
    1<->5
    2<->4
    */
    return 0;
}
