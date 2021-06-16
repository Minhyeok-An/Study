#include <stdio.h>
int Han(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", Han(n));
    return 0;
}
int Han(int n)
{
    int i, cnt = 0, hun, ten, one;
    for (i = 1; i <= n; i++)
    {
        if (i < 100)
            cnt++;
        else
        {
            hun = i / 100;
            ten = (i%100)/10;
            one = i % 10;
            if ((hun - ten) == (ten - one))
                cnt++;
        }
    }
    return cnt;
}
//https://www.acmicpc.net/problem/1065