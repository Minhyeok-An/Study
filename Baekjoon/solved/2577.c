#include <stdio.h>
int main()
{
    int a, b, c, total, tmp, i, n;
    scanf("%d%d%d", &a, &b, &c);
    total = a * b * c;
    for (i = 0; i <= 9; i++)
    {
        tmp = total;
        n = 0;
        while (tmp != 0)
        {
            if (tmp % 10 == i)
                n++;
            tmp /= 10;
        }
        printf("%d\n", n);
    }
    return 0;
}
//https://www.acmicpc.net/problem/2562