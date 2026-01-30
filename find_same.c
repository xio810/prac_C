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

        int check[8] = {0}; // 각 자릿수(index)가 중복인지 아닌지 기록하는 전용 장부

        for (int i = 0; i < length; i++)
        {
                if (same[i] != 0)
                {
                        // 1. 과거를 뒤져서 중복이면 check[i]를 1로 만듦
                        for (int k = 0; k < i; k++)
                        {
                                if (same[k] == same[i])
                                {
                                        check[i] = 1; // "i번 자리에 있는 놈은 이미 앞에서 나왔던 놈임!"
                                        break;
                                }
                        }

                        // 2. 체크 장부를 보고 0(새로운 놈)인 경우에만 실제 숫자(same[i])를 출력
                        if (check[i] == 0)
                        {
                                printf("%d ", same[i]); // check[i]를 찍으면 0만 나오니까 same[i]를 찍어야 해요!
                        }
                }
        }
        return 0;
}
