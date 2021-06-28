#include <stdio.h>

int Answer;

int main(void)
{
    int T, test_case;
    int N, i, in[300000], max, min;

    setbuf(stdout, NULL);

    scanf("%d", &T);
    for (test_case = 0; test_case < T; test_case++)
    {
        Answer = 0;
        max = 0;
        min = 2000000;
        scanf("%d", &N);
        for (i = 0; i < N; i++)
        {
            scanf("%d", &in[i]);
            if (in[i] > max)
                max = in[i];
        }
        for (i = 0; i < N; i++)
            if (in[i] + N > max + 1)
                Answer++;

        printf("Case #%d\n", test_case + 1);
        printf("%d\n", Answer);
    }

    return 0;
}