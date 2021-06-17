#include <stdio.h>
#include <string.h>
int main()
{
    int t, r, n, i, j, k;
    char in[21];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &r);
        getchar();
        gets(in);
        n = strlen(in);
        for (j = 0; j < n; j++)
        {
            for (k = 1; k <= r; k++)
                printf("%c", in[j]);
        }
        printf("\n");
    }
    return 0;
}
//https://www.acmicpc.net/problem/2675