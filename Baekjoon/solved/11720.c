#include <stdio.h>
int main()
{
    int n, total = 0, i;
    char in[101];
    scanf("%d", &n);
    getchar();
    gets(in);
    for (i = 0; i < n; i++)
    {
        total += in[i] - '0';
    }
    printf("%d", total);
    return 0;
}
//https://www.acmicpc.net/problem/11720