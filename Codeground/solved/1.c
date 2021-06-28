#include <stdio.h>

int Answer;

int main(void)
{
    int T, test_case;
    int tmp, i, num;
    setbuf(stdout, NULL);

    scanf("%d", &T);
    for (test_case = 0; test_case < T; test_case++)
    {

        scanf("%d", &num);
        Answer = 0;
        for (i = 0; i < num; i++)
        {
            scanf("%d", &tmp);
            Answer = Answer ^ tmp;
        }

        printf("Case #%d\n", test_case + 1);
        printf("%d\n", Answer);
    }

    return 0;
}