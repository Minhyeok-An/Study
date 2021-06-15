#include <stdio.h>
int main()
{
    int c, n, ar[1000], i, j;
    double avg, rat;
    scanf("%d", &c);
    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        avg = 0;
        rat = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ar[j]);
            avg += ar[j];
        }
        avg /= n;
        for (j = 0; j < n; j++)
        {
            if (avg < ar[j])
                rat++;
        }
        printf("%.3f%%\n", rat * 100 / n);
    }
    return 0;
}
//https://www.acmicpc.net/problem/4344