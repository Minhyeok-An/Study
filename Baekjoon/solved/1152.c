#include <stdio.h>
#include <string.h>
int main()
{
    int n = 1, len, i;
    char words[1000001];
    gets(words);
    len = strlen(words);
    for (i = 0; i < len; i++)
        if (words[i] == ' ')
            n++;
    if (words[0] == ' ')
        n--;
    if (words[len - 1] == ' ')
        n--;
    printf("%d", n);
    return 0;
}