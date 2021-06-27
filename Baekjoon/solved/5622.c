#include <stdio.h>
int main()
{
    int total = 0, tmp, i, j;
    char in[16];
    gets(in);
    for (i = 0; in[i] != 0; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (in[i] == 'A' + j)
            {
                tmp = j;
                break;
            }
        }
        if (tmp < 18)
        {
            total += tmp / 3 + 3;
            continue;
        }
        else if (tmp == 18)
            total += 8;
        else if (18 < tmp && tmp < 22)
            total += 9;
        else if (21 < tmp && tmp < 26)
            total += 10;
    }
    printf("%d", total);
    return 0;
}