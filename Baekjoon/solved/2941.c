#include <stdio.h>
#include <string.h>
int main()
{
    int total = 0, i, j, len;
    char in[101];
    gets(in);
    len = strlen(in);
    for (i = 0; i < len; i++)
    {
        if (in[i] == 'c')
        {
            if (in[i + 1] == '=')

                in[i + 1] = '0';

            else if (in[i + 1] == '-')

                in[i + 1] = '0';
        }
        else if (in[i] == 'd')
        {
            if (in[i + 1] == 'z' && in[i + 2] == '=')
            {
                in[i + 1] = '0';
                in[i + 2] = '0';
            }
            else if (in[i + 1] == '-')
                in[i + 1] = '0';
        }
        else if (in[i] == 'l')
        {
            if (in[i + 1] == 'j')
                in[i + 1] = '0';
        }
        else if (in[i] == 'n')
        {
            if (in[i + 1] == 'j')
                in[i + 1] = '0';
        }
        else if (in[i] == 's')
        {
            if (in[i + 1] == '=')
                in[i + 1] = '0';
        }
        else if (in[i] == 'z')
        {
            if (in[i + 1] == '=')
                in[i + 1] = '0';
        }
    }
    for (i = 0; i < len; i++)

        if (in[i] != '0')
            total++;
    printf("%d", total);
    return 0;
}