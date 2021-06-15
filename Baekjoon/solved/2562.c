#include <stdio.h>
int main()
{
    int max = 0, adr, ar[9], i;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &ar[i]);
        if (max <= ar[i])
        {
            max = ar[i];
            adr = i + 1;
        }
    }
    printf("%d\n%d", max, adr);
    return 0;
}
//https://www.acmicpc.net/problem/2562