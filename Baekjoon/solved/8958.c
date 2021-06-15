#include <stdio.h>
int main()
{
    int n, i, j, total, tmp;
    char chtmp, in[81];
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(in);
        tmp = 0;
        total = 0;
        for (j = 0;; j++)
        {
            if (in[j] == '\0')
                break;
            else if (in[j] == 'X')
            {
                tmp = 0;
            }
            else if (in[j] == 'O')
            {
                tmp++;
                total += tmp;
            }
        }

        printf("%d\n", total);
    }
    return 0;
}
//https://www.acmicpc.net/problem/8958