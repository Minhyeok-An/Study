#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, tmp, n;
    char word[101];
    gets(word);
    n = strlen(word);
    for (i = 'a'; i <= 'z'; i++)
    {
        tmp = -1;
        for (j = 0; j <= n; j++)
        {
            if (word[j] == i)
            {
                printf("%d ", j);
                tmp = 0;
                break;
            }
        }
        if (tmp == -1)
            printf("-1 ");
    }
    return 0;
}
//https://www.acmicpc.net/problem/10809