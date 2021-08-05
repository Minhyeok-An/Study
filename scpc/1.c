#include <stdio.h>
int Answer;

struct isFriend
{
    int n;
    int Di;
} *pre, *next;

int
main(void)
{
    int T, test_case;
    setbuf(stdout, NULL);

    scanf("%d", &T);
    for (test_case = 0; test_case < T; test_case++)
    {
        int i, N, ar_Di[100000];
        Answer = 0;
        scanf("%d", &N);
        for (i = 0; i < N; i++)
            scanf("%d", &ar_Di[i]);


        printf("Case #%d\n", test_case + 1);
        printf("%d\n", Answer);
    }

    return 0;
}