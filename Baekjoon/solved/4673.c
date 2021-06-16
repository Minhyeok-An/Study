#include <stdio.h>
int IsSelfNum(int);
int main()
{
    int i;
    for (i = 1; i <= 10000; i++)
    {
        if (IsSelfNum(i) == 0)
            printf("%d\n", i);
    }
    return 0;
}
int IsSelfNum(int n)
{
    int i, tmp, sum, cnt = 0;
    if (n == 1)
        return 0;
    for (i = 1; i <= n; i++)
    {
        tmp = sum = i;
        while (tmp != 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == n)
        {
            cnt++;
        }
    }
    return cnt;
}
//https://www.acmicpc.net/problem/4673