#include <stdio.h>
int main()
{
    int n, m = 0, ar[1000], i;
    double newsum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] > m)
            m = ar[i];
    }
    for (i = 0; i < n; i++)
    {
        newsum += (double)ar[i] * 100 / m;
    }
    printf("%f", newsum / n);
    return 0;
}
//https://www.acmicpc.net/problem/1546