#include <stdio.h>
int main()
{
    int n, ar[1000000], i;
    int max, min;
    scanf("%d", &n);
    scanf("%d", &ar[0]);
    max = min = ar[0];
    for (i = 1; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] <= min)
            min = ar[i];
        if (ar[i] >= max)
            max = ar[i];
    }
    printf("%d %d", min, max);
    return 0;
}
//https://www.acmicpc.net/problem/10818