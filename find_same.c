#include <stdio.h>

int main()
{

        int arr[8] = {1, 2, 3, 4, 2, 6, 4, 2};
        int length = 8;
        int same[8] = {0};

        for (int i = 0; i < length; i++)
        {
                for (int j = i + 1; j < length; j++)
                {
                        if (arr[i] == arr[j])
                        {
                                same[i] = arr[i];
                        }
                }
        }

        printf("중복된 원소: ");

        /* for (int i = 0; i < length; i++)
        {
                if (same[i] != 0) // same배열에 0이 아닌 수만 들어갈 수 있음
                // same={0,2,0,4,2,0,0,0} -> 1, 3, 4
                {
                        int already_printed = 0;    // 출력된 수 체크하는 플래그변수
                        for (int k = 0; k < i; k++) // k=0, i=1 -> false / k=1, i=1 -> 실행안됨
                        {
                                if (same[k] == same[i]) // k=1 , i=4일때 들어옴
                                {
                                        already_printed = 1;
                                        break;
                                }
                        }
                        //
                        if (already_printed == 0)
                        {
                                printf("%d ", same[i]);
                        }
                }
        } */

        // for (int i = 0; i < length; i++)
        // {
        //         printf("%d : %d\n", i, same[i]);
        // }

        int check[8] = {0}; // 출력된 수 체크하는 플래그변수

        for (int i = 0; i < length; i++)
        {
                if (same[i] != 0) // same배열에 0이 아닌 수만 들어갈 수 있음
                // same={0,2,0,4,2,0,0,0} -> 1, 3, 4 / 2가 두번 들어가므로, 한번만 출력되게 하고 싶은 것
                {
                        for (int k = 0; k < i; k++) // k=0, i=1 -> false / k=1, i=1 -> 실행안됨 / k=0, i=3 -> false / k=1, i=3 -> false
                        {
                                if (same[k] == same[i]) // k=1 , i=4일때 들어옴
                                {
                                        check[i] = 1;
                                        break;
                                }
                        }
                        //
                        if (check[i] == 0)
                        {
                                printf("%d ", check[i]);
                        }
                }
        }
        return 0;
}
