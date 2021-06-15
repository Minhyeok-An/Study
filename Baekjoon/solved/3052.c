#include <stdio.h>
int main()
{
    int in[10], rem[10], n = 0, i, j;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &in[i]);
        rem[i] = in[i] % 42;
    }
    for (i = 0; i < 10; i++)
    {
        if (rem[i] >= 0)
        {
            n++;
            for (j = i + 1; j < 10; j++)
            {
                if (rem[j] == rem[i])
                    rem[j] = -1;
            }
        }
    }
    printf("%d", n);
}
//https://www.acmicpc.net/problem/3052