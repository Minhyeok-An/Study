#include <stdio.h>
int main()
{
    int alpha[26], i, j, tmp, max = 0, maxadr;
    char in[1000001];
    gets(in);
    for (i = 0; i < 26; i++)
    {
        tmp = 0;
        for (j = 0; in[j] != 0; j++)
        {
            if (in[j] == 'a' + i || in[j] == 'A' + i)
                tmp++;
        }
        if (tmp > max)
        {
            max = tmp;
            maxadr = i;
        }
        else if (tmp == max)
        {
            maxadr = -1;
        }
    }
    if (maxadr == -1)
    {
        printf("?");
        return 0;
    }
    else
        printf("%c", 'A' + maxadr);
    return 0;
}